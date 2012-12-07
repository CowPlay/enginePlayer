enginePlayer
============
This project contains game engine players realizations for all supported target systems.

List of supported development systems:
- linux;
- osx.

List of supported IDE:
- eclipse CDT.

List of supported target systems:
- linux;
- osx;
- ios.


File structure
/projects   -   projects files for mulptiple systems.
/source     -   source code for all supported platforms.
/source/generic -   cross platform source code. Can be compile in any supported development system.
/source/ios -   source code for ios. Can be compile only from XCode in OSX.
/source/


How to compile in eclipse
1. Run eclipse CDT. 
2. Open context menu in project explorer. 
3. Select "import". 
4. Select "General/Existing Projects into workspace". 
5. Select your root directory of project "/projects/{your development system}/eclipse/".
6. Click "Next"