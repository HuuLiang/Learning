//load base.js
document.write("<script type='text/javascript' language='JavaScript' src='base.js'></script>");

function login() {
    var form=new FormData();
    form.append("name",eval(document.getElementById("name")).value);
    form.append("password",eval(document.getElementById("password")).value);

    printLog("login");

    requestClient(form,"login.php","Text",function (success,responseValue) {
        // printLog(success+"--"+responseValue);
        // console.log(success+"--"+responseValue);
        Boolean(success) ? login_result(responseValue):login_error();
    })
}

function login_result(code) {
    if (code==0) {
        alert("登录成功");
        // window.location.href='info.html';
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
