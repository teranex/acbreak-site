<?php

function acbreak_install_groups() {
  _acbreak_create_group("Atletiek");
  _acbreak_create_group("Joggers");
}

function _acbreak_create_group($name) {
  $node = new stdClass();
  $node->type = 'group';
  $node->title = $name;
  $node->group_group['und'][0] = '1';

  node_save($node);
}
