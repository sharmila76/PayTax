<?php
/**
 * @file
 * give_userpoints.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function give_userpoints_default_rules_configuration() {
  $items = array();
  $items['rules_add_default_user_points'] = entity_import('rules_config', '{ "rules_add_default_user_points" : {
      "LABEL" : "Add default user points",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "default user points" ],
      "REQUIRES" : [ "rules", "userpoints_rules" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "4" : "4" } } } }
      ],
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "account" ],
            "points" : "20",
            "tid" : "0",
            "entity" : [ "" ],
            "operation" : "[account:points]",
            "display" : 1,
            "moderate" : "default"
          }
        }
      ]
    }
  }');
  $items['rules_deduct_points_when_a_user_post_question'] = entity_import('rules_config', '{ "rules_deduct_points_when_a_user_post_question" : {
      "LABEL" : "deduct points when a user post question",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "deduct points" ],
      "REQUIRES" : [ "rules", "userpoints_rules" ],
      "ON" : { "node_insert--ask_question" : { "bundle" : "ask_question" } },
      "IF" : [
        { "user_has_role" : { "account" : [ "node:author" ], "roles" : { "value" : { "4" : "4" } } } }
      ],
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "node:author" ],
            "points" : "-1",
            "tid" : "0",
            "entity" : [ "" ],
            "operation" : "[node:author]",
            "display" : 1,
            "moderate" : "default"
          }
        }
      ]
    }
  }');
  return $items;
}
