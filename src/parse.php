<?php

$source = file_get_contents('data.html') ;
$lines = split(PHP_EOL,$source) ;
$start = 9 ;
$n = 8 ;

class nation{
  function __construct($name,$women,$men){
     $this->name  = $name  ;
     $this->women = $women ;
     $this->men   = $men   ;
  }
}

$nations = array() ;
$name  = '' ;
  $women = '' ;
  $men   = '' ;
for($i=$start ; $i<count($lines) ; $i++){
  switch($i%$n){
    case 2: 
      $name  = $lines[$i] ;
      $name_parts = split('>',$name) ;
      $name = $name_parts[2] ;
      $name_parts = split('<',$name) ;
      $name = $name_parts[0] ;
      break ;
    case 3:
      $women  = $lines[$i] ;
      $women_parts = split('>',$women) ;
      $women = $women_parts[1] ;
      $women_parts = split('<',$women) ;
      $women = $women_parts[0] ;
      break ;
    case 4:
      $men  = $lines[$i] ;
      $men_parts = split('>',$men) ;
      $men = $men_parts[1] ;
      $men_parts = split('<',$men) ;
      $men = $men_parts[0] ;
      break ;
    case $n-1:
      $nations[] = new nation($name,$women,$men) ;
      $name  = '' ;
      $women = '' ;
      $men   = '' ;
      break ;
    default: 
      break ;
  }
}
$string = array() ;
$string[] = '#include <string>' ;
$string[] = 'void main(){' ;
$string[] = 'const int n = ' . count($nations) . ' ;' ;
$string[] = 'std::string names[n] ;' ;
$string[] = 'float women[n] ;' ;
$string[] = 'float men[n] ;' ;
for($i=0 ; $i<count($nations) ; $i++){
  $string[] = '' ;
  $string[] = 'names[' . $i . '] = "' . $nations[$i]->name  . '" ;' ;
  $string[] = 'women[' . $i . '] = '  . $nations[$i]->women . ' ;'  ;
  $string[] = 'men['   . $i . '] = '  . $nations[$i]->men   . ' ;'  ;
}
$string[] = '}' ;
echo join(PHP_EOL,$string) ;

?>