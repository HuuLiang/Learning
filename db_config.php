<?php
/**
 * Created by PhpStorm.
 * User: Liang
 * Date: 2018/7/26
 * Time: 14:30
 */

$mysql_server_name='127.0.0.1';

$mysql_username='shop_root';

$mysql_password='123456';

$mysql_database='ShopCollectionSystem';

$conn=mysqli_connect($mysql_server_name,$mysql_username,$mysql_password,$mysql_database) or die("error connecting");
