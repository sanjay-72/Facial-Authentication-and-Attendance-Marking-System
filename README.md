# Facial-Authentication-and-Attendance-Marking-System
This project is mainly focussed to automate the process of marking attendance and it also can avoid the tresspassing. This project can be integrated with Arduino UNO or any other micro controller board. In this we commented the python code that is to be used with any micro controller.
<h1>Features</h1>
1. Face Recognition.<br>
2. Green colour is indicated if attendence is marked.<br>
3. Red colour not matched symbol is shown if face is not matched with any of the given faces.<br>
4. It can communicate with Microcontroller.<br>
5. Attendance with time stamp is noted in a CSV file.<br>

<h1>Usage</h1>
1. We have to update the paths of the images that are used in the python code.<br>
2. Install face-recognition, serial and cv2 python packages.<br>
3. Keep the images inside the folder specified with people's names as image names.<br>
4. Then run the code.<br>
5. A new file with name attendance will be created in that working director.<br>
<br>
<h1>Usage with any microcontroller</h1>
1. All the steps above should be performed and in addition to that we have to uncomment the python code lines.<br>
2. We have to update the PORT to which the microcontroller is connected.<br>
3. Then we just have to code our microcontroller based on the serial data that is being received.<br>
4. We attached example code for arduino UNO which will actuate the servo motor if the attendance is marked for that particular person.<br>
<h1>Extra Attachments provided</h1>
1. Project Report <br>
2. Project Presentation <br>
3. Arduino code <br>
4. Full python source code.
<br>

<h1>Previews</h1>

![Project Preview](https://user-images.githubusercontent.com/94333583/211285844-028f82a1-d0bd-442a-9776-146bec005524.jpg)
<br>
![Attendance Preview](https://user-images.githubusercontent.com/94333583/211285886-3892616d-e41a-45b8-97a9-3f2eb450bc86.jpg)
