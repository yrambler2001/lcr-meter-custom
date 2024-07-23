
ALL_PROJECTS := \
       mega644_T7_Mod


.PHONY: all steril clean $(ALL_PROJECTS)

all: $(ALL_PROJECTS)
	
$(ALL_PROJECTS):
	$(MAKE) -C $@

clean:
	for d in $(ALL_PROJECTS);        \
	do                               \
	  $(MAKE) --directory=$$d clean; \
	done

steril:
	for d in $(ALL_PROJECTS);         \
	do                                \
	  $(MAKE) --directory=$$d steril; \
	done



