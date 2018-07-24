<?php
//测试用
//实际应用是从数据库中查找name 然后判断password
$account = array('admin',
                '123456');

$name = $_POST['name'];
$password = $_POST['password'];
if ($account[0]==$name && $account[1]==$password) {
    echo 0;
} else {
    echo 1;
}