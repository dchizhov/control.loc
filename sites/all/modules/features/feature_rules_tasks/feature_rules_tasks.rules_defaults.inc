<?php
/**
 * @file
 * feature_rules_tasks.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function feature_rules_tasks_default_rules_configuration() {
  $items = array();
  $items['rules_assigned_task'] = entity_import('rules_config', '{ "rules_assigned_task" : {
      "LABEL" : "\\u041d\\u0430\\u0437\\u043d\\u0430\\u0447\\u0435\\u043d\\u0438\\u0435 \\u0437\\u0430\\u0434\\u0430\\u043d\\u0438\\u044f",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--assigned_tasks" : { "bundle" : "assigned_tasks" } },
      "DO" : [ { "redirect" : { "url" : "\\/" } } ]
    }
  }');
  $items['rules_task_completion'] = entity_import('rules_config', '{ "rules_task_completion" : {
      "LABEL" : "\\u0417\\u0430\\u0432\\u0435\\u0440\\u0448\\u0435\\u043d\\u0438\\u0435 \\u0437\\u0430\\u0434\\u0430\\u043d\\u0438\\u044f",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--assigned_tasks" : { "bundle" : "assigned_tasks" } },
      "DO" : [
        { "data_set" : {
            "data" : [ "node:field-date-of-completion" ],
            "value" : "[time_tokens:time_difference]"
          }
        }
      ]
    }
  }');
  $items['rules_task_created'] = entity_import('rules_config', '{ "rules_task_created" : {
      "LABEL" : "\\u0421\\u043e\\u0437\\u0434\\u0430\\u043d\\u0438\\u0435 \\u0437\\u0430\\u0434\\u0430\\u043d\\u0438\\u044f",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--tasks" : { "bundle" : "tasks" } },
      "DO" : [ { "redirect" : { "url" : "\\/all_tasks\\/" } } ]
    }
  }');
  return $items;
}
