#!/usr/bin/php
<?php 
  foreach(file('/usr/share/dict/words') as $line){
    // strpos() 関数を使って、文字列 "xy" が含まれる単語を echo "$line"; で表示しなさい。
    if(strpos($line,"xy") !== false){ //if(strpos($line,"xy") !== false)で文字列 "xy" が含まれる単語が表示される。
       echo "$line";
    }
  } 
?>
