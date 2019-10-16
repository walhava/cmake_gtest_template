# cmake_gtest_template

Aim for this template, is to show case how to setup gtest into your project, and how to easily mock behaviours of a
component. This is done by adding the mocked component to test app, thus dropping the requirement to fulfill the
function names from a library, and then utilizing rest of the library calls from actual library.


how to take into use after clone

```
git submodule init
git submodule update
```

and then normal compilation with Cmake

software is 'c' depends on 'b' which depends on 'a'

`Google_Test_run_c_mock_a` shows mocked component a

`Google_Test_run_c_mock_b` shows mocked component b (which also mocks the a at the same time)


