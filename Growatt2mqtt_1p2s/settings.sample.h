//#define DEBUG_SERIAL    1
//#define DEBUG_MQTT      1 
#define MODBUS_RATE     9600      // Modbus speed of Growatt, do not change
#define SLAVE_ID        1         // Default slave ID of Growatt
#define UPDATE_MODBUS   2         // 1: modbus device is read every second
#define UPDATE_STATUS   30        // 10: status mqtt message is sent every 10 seconds
#define RGBSTATUSDELAY  500       // delay for turning off the status led
#define WIFICHECK       500       // how often check lost wifi connection

// Update the below parameters for your project
// Also check NTP.h for some parameters as well
const char* ssid = "";           // Wifi SSID
const char* password = "";    // Wifi password
const char* mqtt_server = "";     // MQTT server
const char* mqtt_user = "";             // MQTT userid
const char* mqtt_password = "";         // MQTT password
const char* clientID = "growatt";                // MQTT client ID
const char* topicRoot = "growatt";             // MQTT root topic for the device, keep / at the end

const char* update_username = "username";
const char* update_password = "password";