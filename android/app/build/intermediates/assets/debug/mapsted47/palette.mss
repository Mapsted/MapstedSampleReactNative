Map { font-directory: url(./fonts); }

@regular: 
                    'Noto Sans Regular',
                    'Noto Sans Arabic Regular';

@medium: 
                    'Noto Sans Medium',
                    'Noto Sans Arabic Medium';

@bold: 
                    'Noto Sans Bold',
                    'Noto Sans Arabic Bold';

@name: [nuti::lang] ? ([name:[nuti::lang]] ? [name:[nuti::lang]] : ([name:[nuti::fallback_lang]] ? [name:[nuti::fallback_lang]] : [name])) : [name];
