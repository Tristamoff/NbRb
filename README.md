# NbRb

Код для импорта Views

$view = new view();
$view->name = 'kyrs';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'nbrb';
$view->human_name = 'Курсы валют';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Курсы валют';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'ещё';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Применить';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
$handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Сортировать по:';
$handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'По возрастанию';
$handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'По убыванию';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Элементов на страницу';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Все -';
$handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Пропустить';
$handler->display->display_options['pager']['options']['tags']['first'] = '« первая';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ предыдущая';
$handler->display->display_options['pager']['options']['tags']['next'] = 'следующая ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'последняя »';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'data' => 'data',
  'price_0' => 'price_0',
  'price_3' => 'price_3',
  'price_2' => 'price_2',
  'price_1' => 'price_1',
  'avg_price' => 'avg_price',
);
$handler->display->display_options['style_options']['default'] = 'data';
$handler->display->display_options['style_options']['info'] = array(
  'data' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'price_0' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'price_3' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'price_2' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'price_1' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'avg_price' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Поле: National Bank of Belarus: Дата */
$handler->display->display_options['fields']['data']['id'] = 'data';
$handler->display->display_options['fields']['data']['table'] = 'nbrb';
$handler->display->display_options['fields']['data']['field'] = 'data';
$handler->display->display_options['fields']['data']['date_format'] = 'custom';
$handler->display->display_options['fields']['data']['custom_date_format'] = 'Y-m-d';
$handler->display->display_options['fields']['data']['second_date_format'] = 'long';
/* Поле: National Bank of Belarus: Price of gold */
$handler->display->display_options['fields']['price_0']['id'] = 'price_0';
$handler->display->display_options['fields']['price_0']['table'] = 'nbrb';
$handler->display->display_options['fields']['price_0']['field'] = 'price_0';
/* Поле: National Bank of Belarus: Price of palladium */
$handler->display->display_options['fields']['price_3']['id'] = 'price_3';
$handler->display->display_options['fields']['price_3']['table'] = 'nbrb';
$handler->display->display_options['fields']['price_3']['field'] = 'price_3';
/* Поле: National Bank of Belarus: Price of platinum */
$handler->display->display_options['fields']['price_2']['id'] = 'price_2';
$handler->display->display_options['fields']['price_2']['table'] = 'nbrb';
$handler->display->display_options['fields']['price_2']['field'] = 'price_2';
/* Поле: National Bank of Belarus: Price of silver */
$handler->display->display_options['fields']['price_1']['id'] = 'price_1';
$handler->display->display_options['fields']['price_1']['table'] = 'nbrb';
$handler->display->display_options['fields']['price_1']['field'] = 'price_1';
/* Поле: National Bank of Belarus: Average price */
$handler->display->display_options['fields']['avg_price']['id'] = 'avg_price';
$handler->display->display_options['fields']['avg_price']['table'] = 'nbrb';
$handler->display->display_options['fields']['avg_price']['field'] = 'avg_price';
$handler->display->display_options['fields']['avg_price']['label'] = 'Золото ср. знач за месяц';
$handler->display->display_options['fields']['avg_price']['avg_type'] = '1';
$handler->display->display_options['fields']['avg_price']['metal_id'] = '0';
/* Поле: National Bank of Belarus: Average price */
$handler->display->display_options['fields']['avg_price_1']['id'] = 'avg_price_1';
$handler->display->display_options['fields']['avg_price_1']['table'] = 'nbrb';
$handler->display->display_options['fields']['avg_price_1']['field'] = 'avg_price';
$handler->display->display_options['fields']['avg_price_1']['label'] = 'Серебро ср. знач за месяц';
$handler->display->display_options['fields']['avg_price_1']['avg_type'] = '1';
$handler->display->display_options['fields']['avg_price_1']['metal_id'] = '1';
/* Поле: National Bank of Belarus: Average price */
$handler->display->display_options['fields']['avg_price_2']['id'] = 'avg_price_2';
$handler->display->display_options['fields']['avg_price_2']['table'] = 'nbrb';
$handler->display->display_options['fields']['avg_price_2']['field'] = 'avg_price';
$handler->display->display_options['fields']['avg_price_2']['label'] = 'Платина ср. знач за месяц';
$handler->display->display_options['fields']['avg_price_2']['avg_type'] = '1';
$handler->display->display_options['fields']['avg_price_2']['metal_id'] = '2';
/* Поле: National Bank of Belarus: Average price */
$handler->display->display_options['fields']['avg_price_3']['id'] = 'avg_price_3';
$handler->display->display_options['fields']['avg_price_3']['table'] = 'nbrb';
$handler->display->display_options['fields']['avg_price_3']['field'] = 'avg_price';
$handler->display->display_options['fields']['avg_price_3']['label'] = 'Палладий ср. знач за месяц';
$handler->display->display_options['fields']['avg_price_3']['avg_type'] = '1';
$handler->display->display_options['fields']['avg_price_3']['metal_id'] = '3';
/* Поле: National Bank of Belarus: Average price */
$handler->display->display_options['fields']['avg_price_4']['id'] = 'avg_price_4';
$handler->display->display_options['fields']['avg_price_4']['table'] = 'nbrb';
$handler->display->display_options['fields']['avg_price_4']['field'] = 'avg_price';
/* Критерий фильтра: National Bank of Belarus: Дата */
$handler->display->display_options['filters']['data']['id'] = 'data';
$handler->display->display_options['filters']['data']['table'] = 'nbrb';
$handler->display->display_options['filters']['data']['field'] = 'data';
$handler->display->display_options['filters']['data']['operator'] = '>';
$handler->display->display_options['filters']['data']['value']['value'] = '-1 week';
$handler->display->display_options['filters']['data']['value']['type'] = 'offset';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'kyrs';
$translatables['kyrs'] = array(
  t('Master'),
  t('Курсы валют'),
  t('ещё'),
  t('Применить'),
  t('Сбросить'),
  t('Сортировать по:'),
  t('По возрастанию'),
  t('По убыванию'),
  t('Элементов на страницу'),
  t('- Все -'),
  t('Пропустить'),
  t('« первая'),
  t('‹ предыдущая'),
  t('следующая ›'),
  t('последняя »'),
  t('Дата'),
  t('Price of gold'),
  t('.'),
  t(','),
  t('Price of palladium'),
  t('Price of platinum'),
  t('Price of silver'),
  t('Золото ср. знач за месяц'),
  t('Серебро ср. знач за месяц'),
  t('Платина ср. знач за месяц'),
  t('Палладий ср. знач за месяц'),
  t('Average price'),
  t('Page'),
);
