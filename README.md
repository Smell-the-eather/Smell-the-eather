This is an intergration of python with arduino??



implemented libaries in the requirements.txt file



to setup the port number for arduino on linux follow these commands

sudo groupadd dialout
sudo gpasswd -a USER dialout
sudo usermod -a -G dialout USER
sudo chmod a+rw /dev/ttyACM0