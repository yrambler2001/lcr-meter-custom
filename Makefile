
ALL_PROJECTS := \
       mega328_TC1


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



