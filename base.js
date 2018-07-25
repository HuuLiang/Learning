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
            // console.log(response);
            responseBlock(1, response);
        }
    };

    xmlhttp.open("POST",url,true);

    xmlhttp.setRequestHeader("Content-type","application/x-www-form-urlencoded");

    xmlhttp.send("name=admin&password=123456");

}