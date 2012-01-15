<?php
/**
 * @file
 * acbreak_base.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function acbreak_base_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'clubrecords';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Clubrecords';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Clubrecords';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'field_date_day_1';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_naam' => 'field_naam',
    'field_discipline' => 'field_discipline',
    'field_record' => 'field_record',
    'field_leeftijdsgroep' => 'field_leeftijdsgroep',
    'field_geslacht' => 'field_geslacht',
    'field_date_day' => 'field_date_day',
    'field_date_day_1' => 'field_date_day_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date_day';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_naam' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_discipline' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_record' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_leeftijdsgroep' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_geslacht' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_date_day' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_date_day_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['order'] = 'desc';
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Naam */
  $handler->display->display_options['fields']['field_naam']['id'] = 'field_naam';
  $handler->display->display_options['fields']['field_naam']['table'] = 'field_data_field_naam';
  $handler->display->display_options['fields']['field_naam']['field'] = 'field_naam';
  $handler->display->display_options['fields']['field_naam']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_naam']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_naam']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_naam']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_naam']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_naam']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_naam']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_naam']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_naam']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_naam']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_naam']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_naam']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_naam']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_naam']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_naam']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_naam']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_naam']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_naam']['field_api_classes'] = 0;
  /* Field: Content: Discipline */
  $handler->display->display_options['fields']['field_discipline']['id'] = 'field_discipline';
  $handler->display->display_options['fields']['field_discipline']['table'] = 'field_data_field_discipline';
  $handler->display->display_options['fields']['field_discipline']['field'] = 'field_discipline';
  $handler->display->display_options['fields']['field_discipline']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_discipline']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_discipline']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_discipline']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_discipline']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_discipline']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_discipline']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_discipline']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_discipline']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_discipline']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_discipline']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_discipline']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_discipline']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_discipline']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_discipline']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_discipline']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_discipline']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_discipline']['field_api_classes'] = 0;
  /* Field: Content: Record */
  $handler->display->display_options['fields']['field_record']['id'] = 'field_record';
  $handler->display->display_options['fields']['field_record']['table'] = 'field_data_field_record';
  $handler->display->display_options['fields']['field_record']['field'] = 'field_record';
  $handler->display->display_options['fields']['field_record']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_record']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_record']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_record']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_record']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_record']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_record']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_record']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_record']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_record']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_record']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_record']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_record']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_record']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_record']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_record']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_record']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_record']['field_api_classes'] = 0;
  /* Field: Content: Leeftijdsgroep */
  $handler->display->display_options['fields']['field_leeftijdsgroep']['id'] = 'field_leeftijdsgroep';
  $handler->display->display_options['fields']['field_leeftijdsgroep']['table'] = 'field_data_field_leeftijdsgroep';
  $handler->display->display_options['fields']['field_leeftijdsgroep']['field'] = 'field_leeftijdsgroep';
  $handler->display->display_options['fields']['field_leeftijdsgroep']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_leeftijdsgroep']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_leeftijdsgroep']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_leeftijdsgroep']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_leeftijdsgroep']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_leeftijdsgroep']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_leeftijdsgroep']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_leeftijdsgroep']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_leeftijdsgroep']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_leeftijdsgroep']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_leeftijdsgroep']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_leeftijdsgroep']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_leeftijdsgroep']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_leeftijdsgroep']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_leeftijdsgroep']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_leeftijdsgroep']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_leeftijdsgroep']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_leeftijdsgroep']['field_api_classes'] = 0;
  /* Field: Content: Geslacht */
  $handler->display->display_options['fields']['field_geslacht']['id'] = 'field_geslacht';
  $handler->display->display_options['fields']['field_geslacht']['table'] = 'field_data_field_geslacht';
  $handler->display->display_options['fields']['field_geslacht']['field'] = 'field_geslacht';
  $handler->display->display_options['fields']['field_geslacht']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_geslacht']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_geslacht']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_geslacht']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_geslacht']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_geslacht']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_geslacht']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_geslacht']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_geslacht']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_geslacht']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_geslacht']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_geslacht']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_geslacht']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_geslacht']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_geslacht']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_geslacht']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_geslacht']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_geslacht']['field_api_classes'] = 0;
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_date_day']['id'] = 'field_date_day';
  $handler->display->display_options['fields']['field_date_day']['table'] = 'field_data_field_date_day';
  $handler->display->display_options['fields']['field_date_day']['field'] = 'field_date_day';
  $handler->display->display_options['fields']['field_date_day']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date_day']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date_day']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date_day']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date_day']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date_day']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_date_day']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date_day']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date_day']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date_day']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date_day']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date_day']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date_day']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_date_day']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date_day']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date_day']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date_day']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_date_day']['settings'] = array(
    'format_type' => 'short_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date_day']['field_api_classes'] = 0;
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_date_day_1']['id'] = 'field_date_day_1';
  $handler->display->display_options['fields']['field_date_day_1']['table'] = 'field_data_field_date_day';
  $handler->display->display_options['fields']['field_date_day_1']['field'] = 'field_date_day';
  $handler->display->display_options['fields']['field_date_day_1']['label'] = 'Jaar';
  $handler->display->display_options['fields']['field_date_day_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_day_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date_day_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date_day_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date_day_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date_day_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date_day_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_date_day_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date_day_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date_day_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date_day_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date_day_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date_day_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date_day_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_date_day_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date_day_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date_day_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date_day_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_date_day_1']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date_day_1']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'clubrecord' => 'clubrecord',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'atletiek/clubrecords';
  $export['clubrecords'] = $view;

  $view = new view;
  $view->name = 'nieuws';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Nieuws';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Nieuws';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nieuws' => 'nieuws',
  );
  /* Filter criterion: Field: Groups audience (group_audience:gid) */
  $handler->display->display_options['filters']['group_audience_gid']['id'] = 'group_audience_gid';
  $handler->display->display_options['filters']['group_audience_gid']['table'] = 'field_data_group_audience';
  $handler->display->display_options['filters']['group_audience_gid']['field'] = 'group_audience_gid';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Home';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nieuws' => 'nieuws',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['path'] = 'nieuws';
  $handler->display->display_options['menu']['title'] = 'Algemeen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'nieuws.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  /* Display: Block - Joggers */
  $handler = $view->new_display('block', 'Block - Joggers', 'block_2');
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nieuws' => 'nieuws',
  );
  /* Filter criterion: Field: Groups audience (group_audience:gid) */
  $handler->display->display_options['filters']['group_audience_gid']['id'] = 'group_audience_gid';
  $handler->display->display_options['filters']['group_audience_gid']['table'] = 'field_data_group_audience';
  $handler->display->display_options['filters']['group_audience_gid']['field'] = 'group_audience_gid';
  $handler->display->display_options['filters']['group_audience_gid']['value']['value'] = '2';

  /* Display: Page - Joggers */
  $handler = $view->new_display('page', 'Page - Joggers', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Joggers';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nieuws' => 'nieuws',
  );
  /* Filter criterion: Field: Groups audience (group_audience:gid) */
  $handler->display->display_options['filters']['group_audience_gid']['id'] = 'group_audience_gid';
  $handler->display->display_options['filters']['group_audience_gid']['table'] = 'field_data_group_audience';
  $handler->display->display_options['filters']['group_audience_gid']['field'] = 'group_audience_gid';
  $handler->display->display_options['filters']['group_audience_gid']['value']['value'] = '2';
  $handler->display->display_options['path'] = 'joggers';
  $handler->display->display_options['menu']['title'] = 'Joggers';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Page - Atletiek */
  $handler = $view->new_display('page', 'Page - Atletiek', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Atletiek';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nieuws' => 'nieuws',
  );
  /* Filter criterion: Field: Groups audience (group_audience:gid) */
  $handler->display->display_options['filters']['group_audience_gid']['id'] = 'group_audience_gid';
  $handler->display->display_options['filters']['group_audience_gid']['table'] = 'field_data_group_audience';
  $handler->display->display_options['filters']['group_audience_gid']['field'] = 'group_audience_gid';
  $handler->display->display_options['filters']['group_audience_gid']['value']['value'] = '1';
  $handler->display->display_options['path'] = 'atletiek';
  $handler->display->display_options['menu']['title'] = 'Atletiek';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['nieuws'] = $view;

  $view = new view;
  $view->name = 'wedstrijden';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Wedstrijden';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Wedstrijden';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 1;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Datum -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['breadcrumb_enable'] = 1;
  $handler->display->display_options['arguments']['tid']['breadcrumb'] = '%1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'wedstrijd_soorten' => 'wedstrijd_soorten',
    'dagen' => 0,
    'disciplines' => 0,
    'functies' => 0,
    'groepen' => 0,
    'locaties' => 0,
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'wedstrijd' => 'wedstrijd',
  );
  /* Filter criterion: Field: Groups audience (group_audience:gid) */
  $handler->display->display_options['filters']['group_audience_gid']['id'] = 'group_audience_gid';
  $handler->display->display_options['filters']['group_audience_gid']['table'] = 'field_data_group_audience';
  $handler->display->display_options['filters']['group_audience_gid']['field'] = 'group_audience_gid';
  $handler->display->display_options['filters']['group_audience_gid']['value']['value'] = '1';
  $handler->display->display_options['filters']['group_audience_gid']['expose']['operator_id'] = 'group_audience_gid_op';
  $handler->display->display_options['filters']['group_audience_gid']['expose']['label'] = 'Groups audience (group_audience:gid)';
  $handler->display->display_options['filters']['group_audience_gid']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['group_audience_gid']['expose']['operator'] = 'group_audience_gid_op';
  $handler->display->display_options['filters']['group_audience_gid']['expose']['identifier'] = 'group_audience_gid';
  $handler->display->display_options['filters']['group_audience_gid']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['group_audience_gid']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['group_audience_gid']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Datum -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Jaar';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-3:+1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'atletiek/wedstrijden';
  $export['wedstrijden'] = $view;

  $view = new view;
  $view->name = 'wie_is_wie';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Wie is Wie';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Wie is Wie';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'persoon' => 'persoon',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'algemeen/club/wie-is-wie';
  $export['wie_is_wie'] = $view;

  return $export;
}
