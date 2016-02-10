<?php

/**
 * Implements hook_views_data().
 */
function nbrb_views_data() {
  $data = array();

  $data['nbrb']['table']['group'] = t('National Bank of Belarus');
  $data['nbrb']['table']['base'] = array(
    'title' => t('The course National Bank of Belarus')
  );

  $i = 0;
  while ($i <= 3) {
    switch ($i) {
      case 0:
        $name = 'gold';
        break;
      case 1:
        $name = 'silver';
        break;
      case 2:
        $name = 'platinum';
        break;
      case 3:
        $name = 'palladium';
        break;
    }
    $data['nbrb']['price_' . $i] = array(
      'title' => t('Price of ' . $name),
      'help' => t('Price of metal ' . $name),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
        'click sortable' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
      ),
    );
    $i++;
  }

  $data['nbrb']['id'] = array(
    'title' => t('Row id'),
    'help' => t('ID of row in database'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
	'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );
  
  $data['nbrb']['avg_price'] = array(
    'title' => t('Average price'),
    'help' => t('Average price of any metal'),
    'field' => array(
      'handler' => 'views_handler_field_nbrb_price_avg',
    ),
  );

  $data['nbrb']['data'] = array(
    'title' => t('Date'),
    'help' => t('Date of sample'),
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
	'argument' => array(
      'handler' => 'views_handler_argument_nbrb_date',
    ),
  );
  return $data;
}
