<?php

/**
 * Implementation of hook_hosting_post_backup
 *
 * Changes the last backup timestamp of the site to the task time.
 */
function hosting_backup_queue_post_hosting_backup_task($task, $data) {
  if ($data['context']['backup_file'] && $task->ref->type == 'site') {
    // TOSO Record the timestamp of the backup in our central table.
  }
}
