<?php
//测试用
//实际应用是从数据库中查找name 然后判断password
//$account = array('admin',
//                '123456');

$name = $_POST['name'];
$password = $_POST['password'];
$autoLogin = $_POST['autoLogin'];

require ("db_config.php");
$sql = "select name from user where name=$name";

$result = mysqli_query($coon,$sql);
if (mysqli_num_rows($result)) {
    if ($autoLogin==1) {
        setcookie('name',$name,strtotime('+2 days'));
    } else {
        setcookie('name',$name);
    }
    exit("<script>
            alert('login success');
        </script>");
}

if ($account[0]==$name && $account[1]==$password) {
    echo 0;
} else {
    echo 1;
}

function console_log($data) {
    echo "<script>
            console.log($data);
    </script><br/>";
}