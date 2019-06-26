//load base.js
// document.write("<script type='text/javascript' language='JavaScript' src='base.js'></script>");

function login() {

    var form = "name=" + eval(document.getElementById("name")).value + "&password=" + (document.getElementById("password")).value;

    requestClient(form,"login.php","Text",function (success,responseValue) {
        Boolean(success) ? login_result(responseValue):login_error();
    })
}

function login_result(code) {
    if (code==0) {
        alert("登录成功");
        window.location.href='info.html';
    } else if (code==1) {
        alert("登录失败，账号信息错误，请检查重试");
    }
}

function login_error() {
    alert("网络错误");
}

function printLog(log) {
    document.getElementById("log").innerHTML=document.getElementById("log").innerHTML+'<br/>'+log;
}
