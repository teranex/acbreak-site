<?php

function acbreak_install_pages() {
  // Update the menu router information.
  menu_rebuild();

  _acbreak_create_page(array(
    'title' => "Club",
    'body' => "todo",
    'path' => "algemeen/club",
    //'menu' => 217,
  ));
}

function _acbreak_create_page($data) {
  $node = new stdClass();
  $node->title = $data['title'];
  $node->body['und'][0]['value'] = $data['body'];
  $node->type = 'page';
  $node->path = array('alias' => $data['path']);

  node_save($node);

  $path = array(
    'source' => 'node/'.$node->nid,
    'alias' => $data['path'],
  );
  path_save($path);

  //$menu = array(
    //'link_path' => 'node/'.$node->nid,
    //'link_title' => $data['title'],
    //'plid' => $data['menu'],
    //'menu_name' => 'main-menu',
  //);
  //menu_link_save($menu);
}
