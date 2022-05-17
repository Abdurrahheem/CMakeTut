




### Adding easy installation
Include the following in to the main `CMakeLists.txt file`. Then `cmake`, build 
and from the build directory run `cpack`
```
include(InstallRequiredSystemLibraries)
set(CPACK_RESOURSE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/License.txt")
set(CPACK_PACKAGE_VERSION_MAJOR "${Tutorial_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${Tutorial_VERSION_MINOR}")
include(CPack)

```

This will generate a file with `<PROJECT_NAME>--<OPERATING SYSTEM>.sh`. Run it to follow
installation guide