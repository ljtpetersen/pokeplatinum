prebuilt_files = [
    'b_bag_gra.narc',
    'b_plist_gra_' + game_language + '.narc',
    'batt_bg.narc',
    'batt_obj_' + game_language + '.narc',
    'pl_b_plist_gra_' + game_language + '.narc',
    'pl_batt_bg.narc',
    'vs_demo_gra_' + game_language+ '.narc'
]

foreach f : prebuilt_files
    nitrofs_files += fs.copyfile(f)
endforeach
