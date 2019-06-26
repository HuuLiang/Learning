
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Shop Info Collection System</title>
    <style type="text/css">

        body {
            background-color: aquamarine;
        }
        h1 {
            text-align: center;
        }
        h2 {
            text-align: center;
        }
        label {
            width:45%;
            display: inline-block;
            text-align: right;
        }
        input[type="text"] {
            width: 15%;
        }
        #inputSubmit {
            text-align: center;
        }
        p[id="log"] {
            text-align: center;
        }
    </style>
    <script type="text/javascript" src="https://3gimg.qq.com/lightmap/components/geolocation/geolocation.min.js"></script>
    <script type="text/javascript">
        <!--定位-->
        var geolocation = new qq.maps.Geolocation("CJBBZ-BYNL4-S7WUY-XBRSE-NQDSS-HWFCB", "ShopLocationKey");
        var options = {timeout: 8000};
        function showPosition(position) {
            if (position.addr.length==0) {
                document.getElementById("location").value=position.nation+position.province+position.city;
            } else {
                document.getElementById("location").value=position.addr;
            }
        };

        function showErr() {
            alert("定位失败");
        };


        function printLog(log) {
            document.getElementById("log").innerHTML=document.getElementById("log").innerHTML+'<br/>'+log;
        }

        function xxx() {
            printLog("begin files upload")
            var files=document.getElementById("files").files;
            console.log(files[0]);
        }

    </script>

</head>
<body>

<h1>信息</h1>
<div id="infomation">
    <form action=<?php phptest();?> method="post" id="informationForm">
        <p class="labelInput"><label for="name">姓名:</label>
            <input type="text" name="name" id="name" value="" required/><br/>
        </p>
        <p class="labelInput"><label for="tel">联系方式:</label>
            <input type="text" name="tel" id="tel" value="" required/><br/>
        </p>
        <p class="labelInput"><label for="cardid">身份证:</label>
            <input type="text" name="cardid" id="cardid" value="" minlength="18" max="18" required/><br/>
        </p>
        <p class="labelInput"><label for="wx">微信:</label>
            <input type="text" name="wx" id="wx" value="" required/><br/>
        </p>
        <p class="labelInput"><label for="shopid">店铺编号:</label>
            <input type="text" name="shopid" id="shopid" value="" required/><br/>
        </p>
        <p class="labelInput"><label for="location">位置:</label>
            <input type="text" name="location" id="location" required/>
            <button type="button" name="locationBtn" onclick="geolocation.getLocation(showPosition, showErr, options)">获取定位</button>
            <br/>
        </p>
        <p class="upload"><label for="files">上传店铺照片</label>
            <input type="file" accept="image/*" name="files" id="files" onchange="xxx()" multiple required/><br/>
        </p>
        <div id="imgs">

        </div>
        <div id="inputSubmit">
            <input type="submit" value="提交"><br/>
        </div>
    </form>
    <p id="log"></p>
</div>


</body>

