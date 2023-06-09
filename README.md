# FaceGood
LiveLink Source for receiving JSON over sockets.

This is an example of how a LiveLink plugin can be implemented inside UE4. The plugin is not intended to be used in production.

See https://docs.unrealengine.com/en-US/Engine/Animation/LiveLinkPlugin/index.html for more information about UE4 LiveLink.


![image](https://github.com/FACEGOOD/FgLiveLinkReciever/assets/11623487/117eb88a-8604-48d3-8480-aa4c18f79d2f)


## Build

Build from Source ,you can learn from https://dev.epicgames.com/community/learning/tutorials/qz93/unreal-engine-building-plugins

Using Visual Studio ( Windows only )
1. Create an empty C++ project with the Engine version you wish to use.
2. Bring the plugin(s) to that C++ project
    ◦ Create a "Plugins" folder in the C++ project's root folder.
    ◦ Copy the plugin(s) folder(s) you want to build into the newly created "Plugins" folder.
3. Compile the C++ project in Visual Studio
    ◦ Right click on the project's uproject file and select "Generate Visual Studio project files"
    ◦ Double click on the *.sln file to launch Visual Studio
    ◦ In Visual Studio select Development Editor and Win64 ( same workflow as for building the engine with VS).
    ◦ Build the project.
4. Once that's done, copy the plugin from the compiled C++ project to the Engine's plugins folder, and overwrite any conflicting files.

If the build fails, the log file detailing the errors is under “YourProject/Saved/Logs/YourProject.log”. 

## Usage

1. Create a "Plugins" folder in the  project's root folder.
2. copy the folder "FgLiveLinkReciever" into the Plugins folder
3. run projectname.uproject and activate the FgLiveLinkReciever plugin,the restart project.  

![image](https://github.com/FACEGOOD/FgLiveLinkReciever/assets/11623487/d8e36a83-1122-4905-a5d9-c6d84c5b060c)   

4. chose menu "Window -> Vritual Production -> livelink"
5. input the ip address and port number   
![image](https://github.com/FACEGOOD/FgLiveLinkReciever/assets/11623487/21b940f4-3d93-4fd6-b044-cc74b1150483)   
6. when has source input,it will create message source automatically

## UDP Protocol
JSON format
```
{
"Jimmy":{  #subjectName
    "FrameId" : 1, #frame id ,option
    "Properties":[
        {"Name":"A","Value":0.0},  # item name and it's value
        {"Name":"B","Value":0.0}
        ]
    }
}
```
