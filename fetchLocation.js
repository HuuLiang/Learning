document.write("<script type='text/javascript' language='JavaScript' src='https://3gimg.qq.com/lightmap/components/geolocation/geolocation.min.js' async></script>");

function getLocation() {

    if (navigator.geolocation) {
        // console.log("beginfetchlocation")
        printLog("beginfetchlocationn");
        // navigator.geolocation.getCurrentPosition(showPosition,showerror);
        var geolocation = new qq.maps.Geolocation("IRVBZ-GVWRK-3HHJV-ARRRR-QMQCS-XXXX", "myapp");
        var options = {timeout: 8000};
        geolocation.getLocation(sucCallback, errCallback,options);
    } else {
        printLog("Geolocation is not supported by this browser.")
        // console.log("Geolocation is not supported by this browser.");
    }
}

function showPosition(position) {
    // console.log("Latitude: " + position.coords.latitude + "Longitude:" + position.coords.longitude);
    printLog("Latitude: " + position.coords.latitude + "Longitude:" + position.coords.longitude);
}


function showerror(error) {
    printLog(error)
    // console.log(error);
    // case error.PERMISSI
    // ON_DENIED:
    //     console.log("User denied the request for Geolocation.");
    //     break;
    // case error.POSITION_UNAVAILABLE:
    // console.log("Location information is unavailable.");
    // break;
    // case error.TIMEOUT:
    // console.log("The request to get user location timed out.");
    // break;
    // case error.UNKNOWN_ERROR:
    // console.log("An unknown error occurred.");
    // break;
}

//成功的回调
function sucCallback(position)
{
    var mapInfo=JSON.stringify(position, null, 4);
    var jsonMapInfo=eval('(' + mapInfo + ')');
    //alert("经度"+jsonMapInfo.lng+"维度"+jsonMapInfo.lat);
    success(jsonMapInfo.lng,jsonMapInfo.lat);
}
//失败的回调
function errCallback(error)
{
    // alert("定位失败!");
    printLog("fail"+error)
}
//业务逻辑
function success(lo,la)
{
    //拿到经纬度的业务逻辑...
    printLog(lo+"|||"+la);
}


function printLog(log) {
    document.getElementById("log").innerText=log;
}


