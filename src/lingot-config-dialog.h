//-*- C++ -*-
/*
 * lingot, a musical instrument tuner.
 *
 * Copyright (C) 2004-2010  Ibán Cereijo Graña, Jairo Chapela Martínez.
 *
 * This file is part of lingot.
 *
 * lingot is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * lingot is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with lingot; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __LINGOT_CONFIG_DIALOG_H__
#define __LINGOT_CONFIG_DIALOG_H__

#include <gtk/gtk.h>

#include "lingot-config.h"

typedef struct _LingotConfigDialog LingotConfigDialog;

struct _LingotConfigDialog {

	// widgets that contains configuration information.
	GtkComboBox* input_system;
	//	GtkEntry* oss_input_dev;
	//	GtkEntry* alsa_input_dev;
	GtkComboBoxEntry* input_dev;
	GtkComboBoxEntry* sample_rate;
	GtkHScale* calculation_rate;
	GtkHScale* visualization_rate;
	GtkHScale* noise_threshold;
	GtkHScale* gain;
	GtkSpinButton* oversampling;
	GtkComboBox* fft_size;
	GtkSpinButton* temporal_window;
	GtkSpinButton* root_frequency_error;
	GtkSpinButton* dft_number;
	GtkSpinButton* dft_size;
	GtkSpinButton* peak_number;
	GtkSpinButton* peak_halfwidth;
	GtkSpinButton* minimum_frequency;
	GtkHScale* rejection_peak_relation;
	GtkLabel* label_sample_rate1;
	GtkLabel* label_sample_rate2;
	// GtkLabel* label_root_frequency;
	// GtkComboBox* combo_root_frequency_reference_note;
	// GtkLabel* jack_label_sample_rate0;
	// GtkLabel* jack_label_sample_rate1;
	// GtkLabel* jack_label_sample_rate2;
	//	GtkLabel* oss_alsa_label_sample_rate0;
	//	GtkLabel* oss_alsa_label_sample_rate2;
	//	GtkLabel* oss_label_input_dev0;
	//	GtkLabel* oss_label_input_dev2;
	//	GtkLabel* alsa_label_input_dev0;
	//	GtkLabel* alsa_label_input_dev2;

	GtkEntry* scale_name;
	GtkTreeView* scale_treeview;

	LingotConfig* conf; // provisional configuration.
	LingotConfig* conf_old; // restoration point for cancel.

	LingotMainFrame* mainframe;

	GtkWidget* win; // window
};

//LingotConfigDialog* lingot_config_dialog_new(LingotMainFrame*);
void lingot_config_dialog_destroy(LingotConfigDialog*);
void lingot_config_dialog_show(LingotMainFrame* frame);

#endif // __LINGOT_CONFIG_DIALOG_H__
