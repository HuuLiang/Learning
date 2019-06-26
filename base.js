// document.write("<script type='text/javascript' language='JavaScript' src='http://ajax.aspnetcdn.com/ajax/jQuery/jquery-1.8.0.js' async></script>");

function GetXmlHttpObject() {
    var xmlHttp = null;
    try {
        // Firefox, Opera 8.0+, Safari
        xmlHttp = new XMLHttpRequest();
    } catch (e) {
        // Internet Explorer
        try {
            xmlHttp = new ActiveXObject("Msxml2.XMLHTTP");
        } catch (e) {
            xmlHttp = new ActiveXObject("Microsoft.XMLHTTP");
        }
    }

    return xmlHttp;
}


function requestClient(formData, url, type, responseBlock) {

    var xmlhttp = GetXmlHttpObject()

    if (xmlhttp == null) {
        printLog("Your browser is not support");
        return;
    }
    xmlhttp.onreadystatechange = function() {

        if (xmlhttp.status == 200 && xmlhttp.readyState == 4) {
            var response;
            if (type == "Text") {
                response = xmlhttp.responseText
            } else if (type == "XML") {
                response = xmlhttp.responseXML;
            }
            responseBlock(1, response);
        }
    };

    xmlhttp.open("POST",url,true);
    xmlhttp.setRequestHeader("Content-type","application/x-www-form-urlencoded");
    xmlhttp.send(formData);
}

//过期时间设定为几分钟
function setCookie(cname,cvalue,exmins){
    var d = new Date();
    d.setTime(d.getTime()+(exmins*60*1000));
    var expires = "expires="+d.toGMTString();
    document.cookie = cname+"="+ encodeURIComponent(cvalue)+"; "+expires;
}
function getCookie(cname){
    var name = cname + "=";
    var ca = document.cookie.split(';');
    for(var i=0; i<ca.length; i++) {
        var c = ca[i].trim();
        if (c.indexOf(name)==0) {
            return c.substring(name.length,c.length);
        }
    }
    return "";
}

function checkCookie(){
    let cname="CollectionSystemCookie";
    var cvalue=getCookie(cname);
    if (user!=""){
        //获取到了cookie 自动填充账号密码

    }
    else {
        user = prompt("请输入你的名字:","");
        if (user!="" && user!=null){
            setCookie("username",user,30);
        }
    }
}