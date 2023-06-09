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


![img_v2_8759c3a2-9b0f-4da0-a193-ed810287c46g](https://github.com/FACEGOOD/FgLiveLinkReciever/assets/11623487/acc4d5ed-6207-455c-b799-b1631dd2d0f0)

4. chose menu "Window -> Vritual Production -> livelink"
5. input the ip address and port number   

![img_v2_4e2ead33-854c-461a-b1e1-7f85ad3d3acg](https://github.com/FACEGOOD/FgLiveLinkReciever/assets/11623487/8241077e-42da-4d21-8ac3-846d331c0c74)

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
