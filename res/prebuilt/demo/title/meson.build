if get_option('version') == 'us_rev0' or get_option('version') == 'us_rev1'
prebuilt_files = [
    'op_demo_us.narc',
]
elif get_option('version') == 'eu'
prebuilt_files = [
    'op_demo_eu.narc',
]
endif

foreach f : prebuilt_files
    nitrofs_files += fs.copyfile(f)
endforeach
