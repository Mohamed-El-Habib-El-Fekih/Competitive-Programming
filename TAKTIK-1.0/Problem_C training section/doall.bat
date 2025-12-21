rem   *** validation ***
call scripts\run-validator-tests.bat
call scripts\run-checker-tests.bat

rem    *** tests ***
md tests
call scripts\gen-input-via-stdout.bat "files\gen-habib.exe -n 100 -n1 1000 12" "tests\13" 13
call scripts\gen-input-via-stdout.bat "files\gen-habib.exe -n 100 -n1 1000 15" "tests\14" 14
call scripts\gen-input-via-stdout.bat "files\gen-habib.exe -n 500 -n1 900 1" "tests\15" 15
call scripts\gen-input-via-stdout.bat "files\gen-habib.exe -n 870 -n1 850 20" "tests\16" 16
call scripts\gen-input-via-stdout.bat "files\gen-habib.exe -n 150 -n1 200 40" "tests\17" 17
call scripts\gen-input-via-stdout.bat "files\gen-habib.exe -n 19 -n1 12 50" "tests\18" 18
call scripts\gen-input-via-stdout.bat "files\gen-habib.exe -n 10 -n1 100 60" "tests\19" 19
call scripts\gen-input-via-stdout.bat "files\gen-habib.exe -n 1000 -n1 100 70" "tests\20" 20
call scripts\gen-input-via-stdout.bat "files\gen-habib.exe -n 1000 -n1 1000 19" "tests\21" 21
call scripts\gen-input-via-stdout.bat "files\gen-habib.exe -n 1000 -n1 1000 80" "tests\22" 22
call scripts\gen-input-via-stdout.bat "files\gen-habib.exe -n 1000 -n1 1000 90" "tests\23" 23
call scripts\gen-input-via-stdout.bat "files\gen-habib.exe -n 10 -n1 10 90" "tests\24" 24
call scripts\gen-input-via-stdout.bat "files\gen-habib.exe -n 10 -n1 10 900" "tests\25" 25
call scripts\gen-input-via-stdout.bat "files\gen-habib.exe -n 10 -n1 10 9000" "tests\26" 26
call scripts\gen-input-via-stdout.bat "files\gen-habib.exe -n 10 -n1 10 90000" "tests\27" 27
call scripts\gen-answer.bat tests\01 tests\01.a "tests" ""
call scripts\gen-answer.bat tests\02 tests\02.a "tests" ""
call scripts\gen-answer.bat tests\03 tests\03.a "tests" ""
call scripts\gen-answer.bat tests\04 tests\04.a "tests" ""
call scripts\gen-answer.bat tests\05 tests\05.a "tests" ""
call scripts\gen-answer.bat tests\06 tests\06.a "tests" ""
call scripts\gen-answer.bat tests\07 tests\07.a "tests" ""
call scripts\gen-answer.bat tests\08 tests\08.a "tests" ""
call scripts\gen-answer.bat tests\09 tests\09.a "tests" ""
call scripts\gen-answer.bat tests\10 tests\10.a "tests" ""
call scripts\gen-answer.bat tests\11 tests\11.a "tests" ""
call scripts\gen-answer.bat tests\12 tests\12.a "tests" ""
call scripts\gen-answer.bat tests\13 tests\13.a "tests" ""
call scripts\gen-answer.bat tests\14 tests\14.a "tests" ""
call scripts\gen-answer.bat tests\15 tests\15.a "tests" ""
call scripts\gen-answer.bat tests\16 tests\16.a "tests" ""
call scripts\gen-answer.bat tests\17 tests\17.a "tests" ""
call scripts\gen-answer.bat tests\18 tests\18.a "tests" ""
call scripts\gen-answer.bat tests\19 tests\19.a "tests" ""
call scripts\gen-answer.bat tests\20 tests\20.a "tests" ""
call scripts\gen-answer.bat tests\21 tests\21.a "tests" ""
call scripts\gen-answer.bat tests\22 tests\22.a "tests" ""
call scripts\gen-answer.bat tests\23 tests\23.a "tests" ""
call scripts\gen-answer.bat tests\24 tests\24.a "tests" ""
call scripts\gen-answer.bat tests\25 tests\25.a "tests" ""
call scripts\gen-answer.bat tests\26 tests\26.a "tests" ""
call scripts\gen-answer.bat tests\27 tests\27.a "tests" ""

