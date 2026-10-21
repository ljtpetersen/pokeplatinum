subdir('scenario')

prebuilt_files = [
    'msg_' + game_language + '.narc'
]

foreach f : prebuilt_files
    nitrofs_files += fs.copyfile(f)
endforeach
