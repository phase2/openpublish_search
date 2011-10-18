<?php
/**
 * @file
 * openpublish_search.features.inc
 */

/**
 * Implements hook_default_search_api_facet().
 */
function openpublish_search_default_search_api_facet() {
  $items = array();
  $items['openpublish_node_ind_field_op__1'] = entity_import('search_api_facet', '{
    "delta" : "openpublish_node_ind_field_op__1",
    "index_id" : "openpublish_node_index",
    "field" : "field_op_author:title",
    "name" : "openpublish_node_index: Author(s) \\u00bb Title",
    "enabled" : "1",
    "options" : {
      "limit" : 10,
      "display_more_link" : false,
      "more_limit" : 10,
      "min_count" : 1,
      "sort" : "count",
      "missing" : false,
      "show_active" : true,
      "default_true" : true,
      "ids_list" : [],
      "type" : "string",
      "field_name" : "Author(s) \\u00bb Title"
    },
    "rdf_mapping" : []
  }');
  $items['openpublish_node_ind_field_op_au'] = entity_import('search_api_facet', '{
    "delta" : "openpublish_node_ind_field_op_au",
    "index_id" : "openpublish_node_index",
    "field" : "field_op_author",
    "name" : "openpublish_node_index: Author(s)",
    "enabled" : "1",
    "options" : {
      "limit" : 10,
      "display_more_link" : false,
      "more_limit" : 10,
      "min_count" : 1,
      "sort" : "count",
      "missing" : false,
      "show_active" : true,
      "default_true" : true,
      "ids_list" : [],
      "type" : "",
      "field_name" : "Author(s)",
      "entity_type" : "node"
    },
    "rdf_mapping" : []
  }');
  $items['openpublish_node_ind_field_op_bl'] = entity_import('search_api_facet', '{
    "delta" : "openpublish_node_ind_field_op_bl",
    "index_id" : "openpublish_node_index",
    "field" : "field_op_blogpost_blog",
    "name" : "openpublish_node_index: Blog",
    "enabled" : "1",
    "options" : {
      "limit" : "10",
      "display_more_link" : 0,
      "more_limit" : "10",
      "min_count" : "1",
      "sort" : "count",
      "missing" : 0,
      "show_active" : 1,
      "default_true" : "1",
      "ids_list" : [],
      "type" : "",
      "field_name" : "Blog",
      "entity_type" : "taxonomy_term"
    },
    "rdf_mapping" : []
  }');
  $items['openpublish_node_ind_search_ap_1'] = entity_import('search_api_facet', '{
    "delta" : "openpublish_node_ind_search_ap_1",
    "index_id" : "openpublish_node_index",
    "field" : "search_api_node_taxonomy_list_term",
    "name" : "openpublish_node_index: Taxonomy List Term",
    "enabled" : "1",
    "options" : {
      "limit" : 10,
      "display_more_link" : false,
      "more_limit" : 10,
      "min_count" : 1,
      "sort" : "count",
      "missing" : false,
      "show_active" : true,
      "default_true" : true,
      "ids_list" : [],
      "type" : "string",
      "field_name" : "Taxonomy List Term"
    },
    "rdf_mapping" : []
  }');
  $items['openpublish_node_ind_search_api_'] = entity_import('search_api_facet', '{
    "delta" : "openpublish_node_ind_search_api_",
    "index_id" : "openpublish_node_index",
    "field" : "search_api_language",
    "name" : "openpublish_node_index: Item language",
    "enabled" : "1",
    "options" : {
      "limit" : 10,
      "display_more_link" : false,
      "more_limit" : 10,
      "min_count" : 1,
      "sort" : "count",
      "missing" : false,
      "show_active" : true,
      "default_true" : true,
      "ids_list" : [],
      "type" : "string",
      "field_name" : "Item language"
    },
    "rdf_mapping" : []
  }');
  $items['openpublish_node_ind_type'] = entity_import('search_api_facet', '{
    "delta" : "openpublish_node_ind_type",
    "index_id" : "openpublish_node_index",
    "field" : "type",
    "name" : "openpublish_node_index: Content type",
    "enabled" : "1",
    "options" : {
      "limit" : 10,
      "display_more_link" : false,
      "more_limit" : 10,
      "min_count" : 1,
      "sort" : "count",
      "missing" : false,
      "show_active" : true,
      "default_true" : true,
      "ids_list" : [],
      "type" : "options",
      "field_name" : "Content type",
      "options" : {
        "openpublish_article" : "Article",
        "openpublish_blog_post" : "Blog Post",
        "openpublish_photo" : "Photo",
        "openpublish_photo_gallery" : "Photo Gallery",
        "profile" : "Profile",
        "section_front" : "Section Front",
        "openpublish_site_page" : "Site Page",
        "openpublish_video" : "Video"
      }
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function openpublish_search_default_search_api_index() {
  $items = array();
  $items['openpublish_node_index'] = entity_import('search_api_index', '{
    "name" : "openpublish_node_index",
    "machine_name" : "openpublish_node_index",
    "description" : null,
    "server" : "openpublish_db_server",
    "entity_type" : "node",
    "options" : {
      "cron_limit" : "50",
      "index_directly" : 1,
      "fields" : {
        "search_api_language" : {
          "name" : "Item language",
          "indexed" : 1,
          "type" : "string",
          "boost" : "1.0"
        },
        "search_api_node_taxonomy_list_tid" : {
          "name" : "Taxonomy List Tid",
          "indexed" : 1,
          "type" : "list\\u003cinteger\\u003e",
          "boost" : "1.0"
        },
        "search_api_node_taxonomy_list_term" : {
          "name" : "Taxonomy List Term",
          "indexed" : 1,
          "type" : "list\\u003cstring\\u003e",
          "boost" : "1.0"
        },
        "nid" : { "name" : "Node ID", "indexed" : 1, "type" : "integer", "boost" : "1.0" },
        "vid" : {
          "name" : "Revision ID",
          "indexed" : 0,
          "type" : "integer",
          "boost" : "1.0"
        },
        "is_new" : { "name" : "Is new", "indexed" : 0, "type" : "boolean", "boost" : "1.0" },
        "type" : {
          "name" : "Content type",
          "indexed" : 1,
          "type" : "string",
          "boost" : "1.0"
        },
        "title" : { "name" : "Title", "indexed" : 1, "type" : "text", "boost" : "1.0" },
        "language" : { "name" : "Language", "indexed" : 0, "type" : "string", "boost" : "1.0" },
        "url" : { "name" : "URL", "indexed" : 0, "type" : "uri", "boost" : "1.0" },
        "edit_url" : { "name" : "Edit URL", "indexed" : 0, "type" : "uri", "boost" : "1.0" },
        "status" : {
          "name" : "Published",
          "indexed" : 1,
          "type" : "boolean",
          "boost" : "1.0"
        },
        "promote" : {
          "name" : "Promoted to frontpage",
          "indexed" : 0,
          "type" : "boolean",
          "boost" : "1.0"
        },
        "sticky" : {
          "name" : "Sticky in lists",
          "indexed" : 0,
          "type" : "boolean",
          "boost" : "1.0"
        },
        "created" : {
          "name" : "Date created",
          "indexed" : 0,
          "type" : "date",
          "boost" : "1.0"
        },
        "changed" : {
          "name" : "Date changed",
          "indexed" : 0,
          "type" : "date",
          "boost" : "1.0"
        },
        "author" : {
          "name" : "Author",
          "indexed" : 0,
          "type" : "integer",
          "entity_type" : "user",
          "boost" : "1.0"
        },
        "source" : {
          "name" : "Translation source node",
          "indexed" : 0,
          "type" : "integer",
          "entity_type" : "node",
          "boost" : "1.0"
        },
        "log" : {
          "name" : "Revision log message",
          "indexed" : 0,
          "type" : "text",
          "boost" : "1.0"
        },
        "revision" : {
          "name" : "Creates revision",
          "indexed" : 0,
          "type" : "boolean",
          "boost" : "1.0"
        },
        "field_op_author" : {
          "name" : "Author(s)",
          "indexed" : 1,
          "type" : "list\\u003cinteger\\u003e",
          "entity_type" : "node",
          "boost" : "1.0"
        },
        "field_op_section_term" : {
          "name" : "Sections",
          "indexed" : 0,
          "type" : "integer",
          "entity_type" : "taxonomy_term",
          "boost" : "1.0"
        },
        "field_op_blogpost_blog" : {
          "name" : "Blog",
          "indexed" : 1,
          "type" : "integer",
          "entity_type" : "taxonomy_term",
          "boost" : "1.0"
        },
        "field_op_photo_credit" : {
          "name" : "Photo Credit",
          "indexed" : 0,
          "type" : "text",
          "boost" : "1.0"
        },
        "field_profile_job_title" : { "name" : "Job Title", "indexed" : 0, "type" : "text", "boost" : "1.0" },
        "field_twitter" : {
          "name" : "Twitter Username",
          "indexed" : 0,
          "type" : "text",
          "boost" : "1.0"
        },
        "field_profile_address" : { "name" : "Address", "indexed" : 0, "type" : "text", "boost" : "1.0" },
        "field_profile_email" : {
          "name" : "Email Address",
          "indexed" : 0,
          "type" : "text",
          "boost" : "1.0"
        },
        "field_profile_first_name" : { "name" : "First Name", "indexed" : 0, "type" : "text", "boost" : "1.0" },
        "field_profile_last_name" : { "name" : "Last Name", "indexed" : 0, "type" : "text", "boost" : "1.0" },
        "field_profile_organization" : {
          "name" : "Organization",
          "indexed" : 0,
          "type" : "text",
          "boost" : "1.0"
        },
        "field_profile_phone" : {
          "name" : "Phone Number",
          "indexed" : 0,
          "type" : "text",
          "boost" : "1.0"
        },
        "field_profile_user" : {
          "name" : "Associated User",
          "indexed" : 0,
          "type" : "integer",
          "entity_type" : "user",
          "boost" : "1.0"
        },
        "field_op_author:nid" : {
          "name" : "Author(s) \\u00bb Node ID",
          "indexed" : 0,
          "type" : "list\\u003cinteger\\u003e",
          "boost" : "1.0"
        },
        "field_op_author:vid" : {
          "name" : "Author(s) \\u00bb Revision ID",
          "indexed" : 0,
          "type" : "list\\u003cinteger\\u003e",
          "boost" : "1.0"
        },
        "field_op_author:is_new" : {
          "name" : "Author(s) \\u00bb Is new",
          "indexed" : 0,
          "type" : "list\\u003cboolean\\u003e",
          "boost" : "1.0"
        },
        "field_op_author:type" : {
          "name" : "Author(s) \\u00bb Content type",
          "indexed" : 0,
          "type" : "list\\u003cstring\\u003e",
          "boost" : "1.0"
        },
        "field_op_author:title" : {
          "name" : "Author(s) \\u00bb Title",
          "indexed" : 1,
          "type" : "list\\u003cstring\\u003e",
          "boost" : "1.0"
        },
        "field_op_author:language" : {
          "name" : "Author(s) \\u00bb Language",
          "indexed" : 0,
          "type" : "list\\u003ctext\\u003e",
          "boost" : "1.0"
        },
        "field_op_author:url" : {
          "name" : "Author(s) \\u00bb URL",
          "indexed" : 0,
          "type" : "list\\u003curi\\u003e",
          "boost" : "1.0"
        },
        "field_op_author:edit_url" : {
          "name" : "Author(s) \\u00bb Edit URL",
          "indexed" : 0,
          "type" : "list\\u003curi\\u003e",
          "boost" : "1.0"
        },
        "field_op_author:status" : {
          "name" : "Author(s) \\u00bb Published",
          "indexed" : 0,
          "type" : "list\\u003cboolean\\u003e",
          "boost" : "1.0"
        },
        "field_op_author:promote" : {
          "name" : "Author(s) \\u00bb Promoted to frontpage",
          "indexed" : 0,
          "type" : "list\\u003cboolean\\u003e",
          "boost" : "1.0"
        },
        "field_op_author:sticky" : {
          "name" : "Author(s) \\u00bb Sticky in lists",
          "indexed" : 0,
          "type" : "list\\u003cboolean\\u003e",
          "boost" : "1.0"
        },
        "field_op_author:created" : {
          "name" : "Author(s) \\u00bb Date created",
          "indexed" : 0,
          "type" : "list\\u003cdate\\u003e",
          "boost" : "1.0"
        },
        "field_op_author:changed" : {
          "name" : "Author(s) \\u00bb Date changed",
          "indexed" : 0,
          "type" : "list\\u003cdate\\u003e",
          "boost" : "1.0"
        },
        "field_op_author:author" : {
          "name" : "Author(s) \\u00bb Author",
          "indexed" : 0,
          "type" : "list\\u003cinteger\\u003e",
          "entity_type" : "user",
          "boost" : "1.0"
        },
        "field_op_author:source" : {
          "name" : "Author(s) \\u00bb Translation source node",
          "indexed" : 0,
          "type" : "list\\u003cinteger\\u003e",
          "entity_type" : "node",
          "boost" : "1.0"
        },
        "field_op_author:log" : {
          "name" : "Author(s) \\u00bb Revision log message",
          "indexed" : 0,
          "type" : "list\\u003ctext\\u003e",
          "boost" : "1.0"
        },
        "field_op_author:revision" : {
          "name" : "Author(s) \\u00bb Creates revision",
          "indexed" : 0,
          "type" : "list\\u003cboolean\\u003e",
          "boost" : "1.0"
        },
        "field_op_blogpost_blog:tid" : {
          "name" : "Blog \\u00bb Term ID",
          "indexed" : 0,
          "type" : "integer",
          "boost" : "1.0"
        },
        "field_op_blogpost_blog:name" : {
          "name" : "Blog \\u00bb Name",
          "indexed" : 0,
          "type" : "text",
          "boost" : "1.0"
        },
        "field_op_blogpost_blog:description" : {
          "name" : "Blog \\u00bb Description",
          "indexed" : 0,
          "type" : "text",
          "boost" : "1.0"
        },
        "field_op_blogpost_blog:weight" : {
          "name" : "Blog \\u00bb Weight",
          "indexed" : 0,
          "type" : "integer",
          "boost" : "1.0"
        },
        "field_op_blogpost_blog:node_count" : {
          "name" : "Blog \\u00bb Node count",
          "indexed" : 0,
          "type" : "integer",
          "boost" : "1.0"
        },
        "field_op_blogpost_blog:url" : {
          "name" : "Blog \\u00bb URL",
          "indexed" : 0,
          "type" : "uri",
          "boost" : "1.0"
        },
        "field_op_blogpost_blog:vocabulary" : {
          "name" : "Blog \\u00bb Vocabulary",
          "indexed" : 0,
          "type" : "integer",
          "entity_type" : "taxonomy_vocabulary",
          "boost" : "1.0"
        },
        "field_op_blogpost_blog:parent" : {
          "name" : "Blog \\u00bb Parent terms",
          "indexed" : 0,
          "type" : "list\\u003cinteger\\u003e",
          "entity_type" : "taxonomy_term",
          "boost" : "1.0"
        }
      },
      "data_alter_callbacks" : {
        "search_api_node_taxonomy_list_search_api_alter_callback" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : null },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "search_api_language" : "search_api_language",
              "field_op_author:title" : "field_op_author:title",
              "nid" : 0,
              "type" : 0,
              "title" : 0,
              "status" : 0,
              "field_op_author" : 0,
              "field_op_blogpost_blog" : 0,
              "field_topic" : 0
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "search_api_language" : 0,
              "nid" : 0,
              "type" : 0,
              "title" : 0,
              "status" : 0,
              "field_op_author" : 0,
              "field_op_blogpost_blog" : 0,
              "field_topic" : 0,
              "field_op_author:title" : 0
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "search_api_language" : 0,
              "nid" : 0,
              "type" : 0,
              "title" : 0,
              "status" : 0,
              "field_op_author" : 0,
              "field_op_blogpost_blog" : 0,
              "field_topic" : 0,
              "field_op_author:title" : 0
            },
            "spaces" : "[^\\\\p{L}\\\\p{N}^\']",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 1,
          "weight" : "30",
          "settings" : { "file" : "", "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc" }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function openpublish_search_default_search_api_server() {
  $items = array();
  $items['openpublish_db_server'] = entity_import('search_api_server', '{
    "name" : "openpublish_db_server",
    "machine_name" : "openpublish_db_server",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "indexes" : {
        "openpublish_node_index" : {
          "search_api_language" : {
            "table" : "search_api_db_openpublish_node_index_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "nid" : {
            "table" : "search_api_db_openpublish_node_index_nid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "type" : {
            "table" : "search_api_db_openpublish_node_index_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_openpublish_node_index_title",
            "type" : "text",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_openpublish_node_index_status",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "field_op_author" : {
            "table" : "search_api_db_openpublish_node_index_field_op_author",
            "type" : "list\\u003cinteger\\u003e",
            "boost" : "1.0"
          },
          "field_op_blogpost_blog" : {
            "table" : "search_api_db_openpublish_node_index_field_op_blogpost_blog",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_op_author:title" : {
            "table" : "search_api_db_openpublish_node_index_field_op_author_title",
            "type" : "list\\u003cstring\\u003e",
            "boost" : "1.0"
          },
          "search_api_node_taxonomy_list_tid" : {
            "table" : "search_api_db_openpublish_node_index_search_api_node_taxonomy_l",
            "type" : "list\\u003cinteger\\u003e",
            "boost" : "1.0"
          },
          "search_api_node_taxonomy_list_term" : {
            "table" : "search_api_db_openpublish_node_index_search_api_node_taxonomy_1",
            "type" : "list\\u003cstring\\u003e",
            "boost" : "1.0"
          }
        },
        "test" : {
          "search_api_language" : {
            "table" : "search_api_db_test_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : { "table" : "search_api_db_test_title", "type" : "text", "boost" : "1.0" },
          "status" : {
            "table" : "search_api_db_test_status",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "field_op_blogpost_blog" : {
            "table" : "search_api_db_test_field_op_blogpost_blog",
            "type" : "integer",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
