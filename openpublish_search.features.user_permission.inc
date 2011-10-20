<?php
/**
 * @file
 * openpublish_search.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openpublish_search_user_default_permissions() {
  $permissions = array();

  // Exported permission: use search_api_facets
  $permissions['use search_api_facets'] = array(
    'name' => 'use search_api_facets',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'search_api_facets',
  );

  return $permissions;
}
