charmap_txt = fs.copyfile('charmap.txt')

if get_option('version') == 'us_rev0'
    msgenc_version_arg = '-DPOKEPLATINUM_VERSION=0'
elif get_option('version') == 'us_rev1'
    msgenc_version_arg = '-DPOKEPLATINUM_VERSION=1'
elif get_option('version') == 'eu'
    msgenc_version_arg = '-DPOKEPLATINUM_VERSION=2'
endif

msgenc_exe = executable('msgenc',
    sources: [
        'msgenc.cpp',
        'Options.cpp',
        'MessagesConverter.cpp',
        'MessagesDecoder.cpp',
        'MessagesEncoder.cpp',
        'Gmm.cpp',
        'Json.cpp',
        'pugixml.cpp'
    ],
    cpp_args: [
        '-DNDEBUG',
        msgenc_version_arg,
        '-g',
        '-std=c++17',
        '-Wall',
        '-Wextra',
        '-Wpedantic',
        '-Wno-unused-parameter',
    ],
    native: true,
    dependencies: dataproc_dep,
)
