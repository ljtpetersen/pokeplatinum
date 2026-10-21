lang_dependent_types = [
  'beauty',
  'cute',
  'dragon',
  'electric',
  'psychic',
  'dark',
  'fighting',
  'fire',
  'flying',
  'ghost',
  'ground',
  'ice',
  'bug',
  'smart',
  'grass',
  'normal',
  'poison',
  'mystery',
  'rock',
  'steel',
  'tough',
  'cool',
  'water',
]

processed_lang_dependent_types = []

foreach t : lang_dependent_types
    processed_lang_dependent_types += t + '_' + game_language + '.png'
endforeach

battle_sprites += [
  nclr_gen.process(
    files('shared.pal'),
    preserve_path_from: base_directory,
    extra_args: [ '-nopad', '-invertsize', '-pcmp', '-bitdepth', '4' ],
  ),

  ncgr_lz_gen.process(
    files(processed_lang_dependent_types),
    extra_args: [ '-bitdepth', '4', '-version101', '-clobbersize' ],
    preserve_path_from: base_directory,
  ),

  ncgr_lz_gen.process(
    files(
      'physical.png',
      'status.png',
      'special.png',
    ),
    extra_args: [ '-bitdepth', '4', '-clobbersize' ],
    preserve_path_from: base_directory,
  ),

  ncer_lz_gen.process(files('cell.json'), preserve_path_from: base_directory),
]
