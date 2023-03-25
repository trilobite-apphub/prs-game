if get_option('with_tests').enabled()
    trilo_utest_dep = dependency('trilo-utest-c')

    test_exe = executable('test-prog',
        'test_cases.c',
        dependencies : [trilo_utest_dep, code_dep])

    test('Execute project tests', test_exe)
endif
