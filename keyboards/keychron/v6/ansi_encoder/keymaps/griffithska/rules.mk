#Copied from /keychron/rules.mk to make things work, should move to keyboard.json(info.json?)?
VIA_ENABLE = yes
ENCODER_MAP_ENABLE = yes

VPATH += keyboards/keychron/common
SRC += keychron_common.c

#My stuff
#ENCODER_MAP_ENABLE = yes	#redundant now per above
DYNAMIC_MACRO_ENABLE = yes
CAPS_WORD_ENABLE = yes
COMBO_ENABLE = yes
TAP_DANCE_ENABLE = no
#NKRO_ENABLE = no			# Disable USB N-key Rollover for better KVM compatibility
#MOUSEKEY_ENABLE = no		# Disable Mouse keys for better KVM compatibility
MIDI_ENABLE = no			#Disable for better KVM compatibility
RAW_ENABLE = no				#Disable for better KVM compatibility
VIRTSER_ENABLE = no			#Disable for better KVM compatibility
#KEYBOARD_SHARED_EP = yes	#Try this as a last resort maybe?