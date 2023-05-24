# ESP8266 Relay Control with Sinric Pro
Really easy relay control tutorial <br>
Tested :
ESP8266 <br>
Not Tested On : 
ESP32
___
# Description 
The purpose of this project is to provide a simple example of integrating the ESP8266 with Sinric Pro to control relays. By following this guide, you will be able to turn on and off relays connected to your ESP8266 board using voice commands through Sinric Pro.
___
# Features
Control relays using voice commands or mobile application.
Real-time status updates of the relays.
Easy integration with Sinric Pro platform
___
# Installation
   <h2>Installation</h2>
<ol>
  <li>Install the required libraries:</li>
  <ul>
    <li><a href="https://github.com/sinricpro/esp8266-esp32-sdk">SinricPro</a></li>
    <li><a href="https://github.com/esp8266/Arduino/tree/master/libraries/ESP8266WiFi">ESP8266WiFi</a></li>
    <li><a href="https://github.com/bblanchon/ArduinoJson">ArduinoJson</a></li>
  </ul>
  <li>Modify the following values in the code:</li>
  <ul>
    <li><code>wifissid</code>: Replace with your Wi-Fi SSID.</li>
    <li><code>wifipass</code>: Replace with your Wi-Fi password.</li>
    <li><code>Appkey</code> and <code>Appsecret</code>: Replace with your Sinric Pro application key and secret.</li>
  </ul>
  <p>
    <img src="https://github.com/Gamerboisoap1/sinricprorelay/assets/26406936/49b2f9e2-d682-46ed-ba35-5c123fc74fbe" alt="Code modification" />
  </p>
  <li>Set the GPIO pin for the relay:</li>
  <ul>
    <li>In the line <code>#define RELAYPIN_1</code>, specify the GPIO pin you are using on your ESP8266 microcontroller.</li>
  </ul>
  <p>
    <img src="https://github.com/Gamerboisoap1/sinricprorelay/assets/26406936/b92d711d-7c4d-4377-b0f8-cb6ffa1cfaba" alt="GPIO pin configuration" />
  </p>
  </ol>
  <h2>Connect the relay module to your ESP8266 board:</h2>
      
<ol>


  <ul>
    <li>Connect the VCC pin of the relay to the VCC of the ESP8266.</li>
    <li>Connect the GND pin of the relay to the GND of the ESP8266.</li>
    <li>Connect the IN1 pin of the relay to the GPIO pin specified in <code>RELAYPIN_1</code>.</li>
    <img src="https://github.com/Gamerboisoap1/sinricprorelay/assets/26406936/7ad7a91d-ab66-40cc-8d5e-56507185c280"/>


  </ul>
 
</ol>

<table>
  <tr>
    <th>ESP</th>
    <th>VCC</th>
    <th>GND</th>
    <th>GPIO PIN</th>
  </tr>
    <tr>
    <th>TO</th>
    <th>TO</th>
    <th>TO</th>
    <th>TO</th>
  </tr>
  <tr>
    <td>RELAY</td>
    <td>VCC</td>
    <td>GND</td>
    <th>IN1</th>
  </tr>
</table>


<h2>Usage</h2>
  <ol>
    <li>Power up the ESP8266 board and connect it to your Wi-Fi network.</li>
    <li>Open the Serial Monitor to view the debug information (baud rate: 115200).</li>
    <li>The ESP8266 will attempt to connect to the Sinric Pro server and register the device.</li>
    <li>Once the device is successfully registered, you can control the relay through the Sinric Pro app or using voice commands with supported voice assistants (e.g., Amazon Alexa, Google Assistant).</li>
  </ol>
  
   <h2>Customization</h2>
  <p>You can customize the behavior and configuration of the ESP8266 relay by modifying the settings in the code. Some possible customizations include:</p>
  <ul>
    <li>Changing Wi-Fi network credentials.</li>
    <li>Configuring multiple relays and their respective GPIO pin assignments.</li>
    <li>Modifying the device name and device type reported to Sinric Pro.</li>
    <li>Adding additional functionality or control logic based on your specific requirements.</li>
  </ul>
  
  <h2>Contributing</h2>
  <p>Contributions are welcome! If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.</p>

<h2>Acknowledgements</h2>
  <ul>
    <li>This project is based on the Sinric Pro library and examples.</li>
    <li>Thanks to the contributors of the libraries used in this project.</li>
  </ul>

<h2>Disclaimer</h2>
  <p>Please note that electrical devices should be handled with caution. Ensure proper knowledge and understanding of electrical systems and safety precautions before using this project. The authors and contributors of this project are not responsible for any damages or injuries caused by the use of this software or the associated hardware. Use at your own risk.</p>
</body>
</html>
