<?php
/*
+----------------------------------------------------------------------+
| BasiliX - Copyright (C) 2000-2002 Murat Arslan <arslanm@basilix.org> |
+----------------------------------------------------------------------+
*/

// -- connect to the imap server
function imap_connect($username, $password, $host, $port, $notls = 0) {
    global $imap;
    $imap_ok = $imap->open($username, $password, $host, $port, $notls);
    if($imap_ok == false) return false;
    return true;
}
?>
