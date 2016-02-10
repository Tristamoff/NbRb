<?php

/**
 * A handler to display dates as just the time if today, otherwise as time and date.
 *
 * @ingroup views_field_handlers
 */
class views_handler_field_nbrb_price_avg extends views_handler_field_numeric {
  function option_definition() {
    $options = parent::option_definition();
    //объявляем настройку "за сколько месяцев усреднять"
    $options['avg_type'] = array('default' => 1);
    //объявляем настройку "металл"
    $options['metal_id'] = array('default' => 0);
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['avg_type'] = array(
      '#type' => 'select',
      '#title' => t('Average for'),
      '#required' => TRUE,
      '#options' => array(
        1 => t('1 month'),
        3 => t('3 months'),
        6 => t('6 months'),
        12 => t('1 year'),
      ),
      '#default_value' => isset($this->options['avg_type']) ? $this->options['avg_type'] : 1,
    );
    $form['metal_id'] = array(
      '#type' => 'select',
      '#title' => t('Metal'),
      '#required' => TRUE,
      '#options' => array(
        0 => t('Gold'),
        1 => t('Silver'),
        2 => t('Platinum'),
        3 => t('Palladium'),
      ),
      '#default_value' => isset($this->options['metal_id']) ? $this->options['metal_id'] : 1,
    );
  }

  function render($values) {
    $q = db_select('nbrb', 'n');
    $q->addExpression('AVG(price_' . $this->options['metal_id'] . ')');
    $q->condition('n.data', $values->nbrb_data, '<=');
    $from = strtotime('-' . $this->options['avg_type'] . ' month', $values->nbrb_data);
    $q->condition('n.data', $from, '>=');
    return $q->execute()->fetchField();
  }
}
