# Collect inputs for main.lcf
main_lsf = files('main.lsf')
main_lcf_template = subproject('NitroSDK').get_variable('main_lcf_template')

# Generate main.lcf
main_lcf = custom_target('main.lcf',
    output: 'main.lcf',
    input: main_lsf + main_lcf_template,
    command: [makelcf_exe, '@INPUT@','@OUTPUT@']
)

# Collect ROM inputs and SHA-sums for later use
filesys_csv = files('filesys.csv')
filesys_sha1 = files('filesys.sha1')
icon_png = files('icon.png')
sbins_sha1 = files('sbins.sha1')
sbins_arm7_sha1 = files('sbins_arm7.sha1')

rom_header_template = files('rom_header_template.sbin')
rom_ini = files('rom.ini')
rom_sha1 = files('rom.sha1')
