# JSON files are run through jsonproc, which is a tool that converts JSON data to an output file
# based on an Inja template. https://github.com/pantor/inja

AUTO_GEN_TARGETS += $(DATA_SRC_SUBDIR)/wild_encounters.h
$(DATA_SRC_SUBDIR)/wild_encounters.h: $(DATA_SRC_SUBDIR)/wild_encounters.json $(DATA_SRC_SUBDIR)/wild_encounters.json.txt
	$(JSONPROC) $^ $@

$(C_BUILDDIR)/wild_encounter.o: c_dep += $(DATA_SRC_SUBDIR)/wild_encounters.h

AUTO_GEN_TARGETS += $(DATA_SRC_SUBDIR)/region_map/region_map_entries.h
$(DATA_SRC_SUBDIR)/region_map/region_map_entries.h: $(DATA_SRC_SUBDIR)/region_map/region_map_sections.json $(DATA_SRC_SUBDIR)/region_map/region_map_sections.entries.json.txt
	$(JSONPROC) $^ $@

$(C_BUILDDIR)/region_map.o: c_dep += $(DATA_SRC_SUBDIR)/region_map/region_map_entries.h

AUTO_GEN_TARGETS += $(DATA_SRC_SUBDIR)/region_map/region_map_entry_strings.h
$(DATA_SRC_SUBDIR)/region_map/region_map_entry_strings.h: $(DATA_SRC_SUBDIR)/region_map/region_map_sections.json $(DATA_SRC_SUBDIR)/region_map/region_map_sections.strings.json.txt
	$(JSONPROC) $^ $@

$(C_BUILDDIR)/region_map.o: c_dep += $(DATA_SRC_SUBDIR)/region_map/region_map_entry_strings.h

AUTO_GEN_TARGETS += include/constants/region_map_sections.h
include/constants/region_map_sections.h: $(DATA_SRC_SUBDIR)/region_map/region_map_sections.json $(DATA_SRC_SUBDIR)/region_map/region_map_sections.constants.json.txt
	$(JSONPROC) $^ $@

AUTO_GEN_TARGETS += $(DATA_SRC_SUBDIR)/items_en.h

$(DATA_SRC_SUBDIR)/items_en.h: $(DATA_SRC_SUBDIR)/items.json $(DATA_SRC_SUBDIR)/items_en.json.txt
	$(JSONPROC) $^ $@

ifeq ($(GAME_LANGUAGE),ENGLISH)
$(C_BUILDDIR)/item.o: c_dep += $(DATA_SRC_SUBDIR)/items_en.h
endif #ENGLISH

AUTO_GEN_TARGETS += $(DATA_SRC_SUBDIR)/items_es.h

$(DATA_SRC_SUBDIR)/items_es.h: $(DATA_SRC_SUBDIR)/items.json $(DATA_SRC_SUBDIR)/items_es.json.txt
	$(JSONPROC) $^ $@

ifeq ($(GAME_LANGUAGE),SPANISH)
$(C_BUILDDIR)/item.o: c_dep += $(DATA_SRC_SUBDIR)/items_es.h
endif #SPANISH

AUTO_GEN_TARGETS += $(DATA_SRC_SUBDIR)/items_it.h

$(DATA_SRC_SUBDIR)/items_it.h: $(DATA_SRC_SUBDIR)/items.json $(DATA_SRC_SUBDIR)/items_it.json.txt
	$(JSONPROC) $^ $@

ifeq ($(GAME_LANGUAGE),ITALIAN)
$(C_BUILDDIR)/item.o: c_dep += $(DATA_SRC_SUBDIR)/items_it.h
endif #ITALIAN

AUTO_GEN_TARGETS += $(DATA_SRC_SUBDIR)/items_fr.h

$(DATA_SRC_SUBDIR)/items_fr.h: $(DATA_SRC_SUBDIR)/items.json $(DATA_SRC_SUBDIR)/items_fr.json.txt
	$(JSONPROC) $^ $@

ifeq ($(GAME_LANGUAGE),FRENCH)
$(C_BUILDDIR)/item.o: c_dep += $(DATA_SRC_SUBDIR)/items_fr.h
endif #FRENCH

AUTO_GEN_TARGETS += $(DATA_SRC_SUBDIR)/items_de.h

$(DATA_SRC_SUBDIR)/items_de.h: $(DATA_SRC_SUBDIR)/items.json $(DATA_SRC_SUBDIR)/items_de.json.txt
	$(JSONPROC) $^ $@

ifeq ($(GAME_LANGUAGE),GERMAN)
$(C_BUILDDIR)/item.o: c_dep += $(DATA_SRC_SUBDIR)/items_de.h
endif #GERMAN

AUTO_GEN_TARGETS += $(DATA_SRC_SUBDIR)/trainers.h
$(DATA_SRC_SUBDIR)/trainers.h: $(DATA_SRC_SUBDIR)/trainers.json $(DATA_SRC_SUBDIR)/trainers.json.txt
	$(JSONPROC) $^ $@

AUTO_GEN_TARGETS += $(DATA_SRC_SUBDIR)/heal_locations.h
$(DATA_SRC_SUBDIR)/heal_locations.h: $(DATA_SRC_SUBDIR)/heal_locations.json $(DATA_SRC_SUBDIR)/heal_locations.json.txt
	$(JSONPROC) $^ $@

$(C_BUILDDIR)/heal_location.o: c_dep += $(DATA_SRC_SUBDIR)/heal_locations.h

AUTO_GEN_TARGETS += include/constants/heal_locations.h
include/constants/heal_locations.h: $(DATA_SRC_SUBDIR)/heal_locations.json $(DATA_SRC_SUBDIR)/heal_locations.constants.json.txt
	$(JSONPROC) $^ $@
