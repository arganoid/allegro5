#ifndef CONFIG_H
#define CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ALLEGRO_CONFIG_ENTRY ALLEGRO_CONFIG_ENTRY;
typedef struct ALLEGRO_CONFIG_SECTION ALLEGRO_CONFIG_SECTION;
typedef struct ALLEGRO_CONFIG ALLEGRO_CONFIG;

AL_FUNC(ALLEGRO_CONFIG *, al_config_create, (void));
AL_FUNC(void, al_config_add_section, (ALLEGRO_CONFIG *config, const char *name));
AL_FUNC(void, al_config_set_value, (ALLEGRO_CONFIG *config, const char *section, const char *key, const char *value));
AL_FUNC(const char*, al_config_get_value, (const ALLEGRO_CONFIG *config, const char *section, const char *key));
AL_FUNC(ALLEGRO_CONFIG*, al_config_read, (const char *filename));
AL_FUNC(int, al_config_write, (const ALLEGRO_CONFIG *config, const char *filename));
AL_FUNC(void, al_config_merge_into, (ALLEGRO_CONFIG *master, const ALLEGRO_CONFIG *add));
AL_FUNC(ALLEGRO_CONFIG *, al_config_merge, (const ALLEGRO_CONFIG *cfg1, const ALLEGRO_CONFIG *cfg2));
AL_FUNC(void, al_config_destroy, (ALLEGRO_CONFIG *config));

#ifdef __cplusplus
}
#endif

#endif /* CONFIG_H */
