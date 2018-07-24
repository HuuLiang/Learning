//load base.js
document.write("<script type='text/javascript' language='JavaScript' src='base.js'></script>");

function login() {
    // printLog("beginLogin")
    var xmlhttp = GetXmlHttpObject()
    if (xmlhttp==null) {
        printLog("Your browser is not support");
        return;
    }
    // noinspection JSAnnotator
    xmlhttp.onreadystatechange=function() {
        if (xmlhttp.status==200 && xmlhttp.readyState==4) {
            var responseCode=xmlhttp.responseText;
            login_result(responseCode);
        } else {
            console.log(xmlhttp.status);
        }
    }
    var paraments = eval(document.getElementById("name")).name + "=" + eval(document.getElementById("name")).value +"&"+ eval(document.getElementById("password")).name + "="+ eval(document.getElementById("password")).value;
    // printLog(paraments);
    xmlhttp.open("POST","login.php",true);
    xmlhttp.setRequestHeader("Content-type","application/x-www-form-urlencoded");
    xmlhttp.send(paraments);
}

function login_result(code) {
    // printLog("result code is " + code);
    if (code==0) {
        alert("登录成功");
        window.location.href='info.html';
    } else if (code==1) {
        alert("登录失败，账号信息错误，请检查重试");
    }
}

function printLog(log) {
    document.getElementById("log").innerText=log;
}

function showerror() {
    alert("error");
}