<?php

phpinfo();
function xx(){
    var_dump("XXXX");

}
use yii\web\Controller;

class test
{
    public function actionIndex()
    {
       echo  $this->render();
    }
    public function render()
    {
        return "render";
    }
}
