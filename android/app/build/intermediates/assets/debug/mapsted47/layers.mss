
#text {
	text-name: @name;
	text-fill: [ENTITY_ID] =~ [nuti::hidden_text_id_regex] ? rgba(0,0,0,0) : @text_fill;
	text-face-name: @medium;
	text-size: linear([view::zoom], (@text_zoom_start,0), (@text_zoom_mid,10), (@text_zoom_end,14));
	text-halo-fill: @text_halo_fill;
	text-halo-radius: [ENTITY_ID] =~ [nuti::hidden_text_id_regex] ? 0.0 : @text_halo_radius;
	polygon-opacity: 1;

	[fade = 'true'] {
		text-size: linear([view::zoom], (@text_fade_start,0), (@text_fade_mid,10), (@text_fade_end,14), (@text_fade_gone,0));

		[size = 'small'] {
	   		text-size: linear([view::zoom], (@text_fade_start,0), (@text_fade_mid,5), (@text_fade_end,7), (@text_fade_gone,0));
	    }
		[size = 'medium'] {
	   		text-size: linear([view::zoom], (@text_fade_start,0), (@text_fade_mid,7.5), (@text_fade_end,10), (@text_fade_gone,0));
	    }
		[size = 'normal'] {
	   		text-size: linear([view::zoom], (@text_fade_start,0), (@text_fade_mid,10), (@text_fade_end,14), (@text_fade_gone,0));
		}
		[size = 'large'] {
	   		text-size: linear([view::zoom], (@text_fade_start,0), (@text_fade_mid,14), (@text_fade_end,17), (@text_fade_gone,0));
	    }
    }

   	[rotation_lock = 'true'] {
   		text-orientation: [rotation];
    }

	[size = 'small'] {
	   	text-size: linear([view::zoom], (@text_zoom_start,0), (@text_zoom_mid,5), (@text_zoom_end,7));
	}
	[size = 'medium'] {
	   	text-size: linear([view::zoom], (@text_zoom_start,0), (@text_zoom_mid,7.5), (@text_zoom_end,10));
	}
	[size = 'normal'] {
	   	text-size: linear([view::zoom], (@text_zoom_start,0), (@text_zoom_mid,10), (@text_zoom_end,14));
	}
	[size = 'large'] {
	   	text-size: linear([view::zoom], (@text_zoom_start,0), (@text_zoom_mid,14), (@text_zoom_end,17));
	}
}

#transitions {
	building-height: [nuti::use_3d] ? ([render_height] ? [render_height] : 0.0) : 0.0;
	building-fill-opacity: [nuti::use_3d] ? ([render_height] ? @height_opacity : 0.0) : 0.0;
	polygon-opacity: @transitions_polygon_opacity;
	polygon-fill: rgba(255,255,255,0);
	building-fill: rgba(255,255,255,0);


    [class='entrance'] {
        polygon-fill: @entrance_fill;
        building-fill: @entrance_fill;
        line-color: @entrance_line;
        line-width: @entrance_line_width;
    }

    [class='elevator'] {
        polygon-fill: @elevator_fill;
        building-fill: @elevator_fill;
        line-color: @elevator_line;
        line-width: @elevator_line_width;
    }

    [class='escalator'] {
        polygon-fill: @escalator_fill;
        building-fill: @escalator_fill;
        line-color: @escalator_line;
        line-width: @escalator_line_width;
    }

    [class='movingwalkway'] {
        polygon-fill: @movingwalkway_fill;
        building-fill: @movingwalkway_fill;
        line-color: @movingwalkway_line;
        line-width: @movingwalkway_line_width;
    }

    [class='ramp'] {
        polygon-fill: @ramp_fill;
        building-fill: @ramp_fill;
        line-color: @ramp_line;
        line-width: @ramp_line_width;
    }

    [class='stairs'] {
        polygon-fill: @stairs_fill;
        building-fill: @stairs_fill;
        line-color: @stairs_line;
        line-width: @stairs_line_width;
    }

    [class='steps'] {
        polygon-fill: @steps_fill;
        building-fill: @steps_fill;
        line-color: @steps_line;
        line-width: @steps_line_width;
    }

    when([ENTITY_ID] =~ [nuti::custom_highlight_entity_id_regex_1]) {
        polygon-fill: [nuti::custom_highlight_color_1];
		building-fill: [nuti::custom_highlight_color_1];
    }
    when([ENTITY_ID] =~ [nuti::custom_highlight_entity_id_regex_2]) {
        polygon-fill: [nuti::custom_highlight_color_2];
		building-fill: [nuti::custom_highlight_color_2];
    }
    when([ENTITY_ID] =~ [nuti::custom_highlight_entity_id_regex_3]) {
        polygon-fill: [nuti::custom_highlight_color_3];
		building-fill: [nuti::custom_highlight_color_3];
    }
    when([ENTITY_ID] =~ [nuti::custom_highlight_entity_id_regex_4]) {
        polygon-fill: [nuti::custom_highlight_color_4];
		building-fill: [nuti::custom_highlight_color_4];
    }
    when([ENTITY_ID] =~ [nuti::custom_highlight_entity_id_regex_5]) {
        polygon-fill: [nuti::custom_highlight_color_5];
		building-fill: [nuti::custom_highlight_color_5];
    }
}

#obstacles {
	building-height: [nuti::use_3d] ? ([render_height] ? [render_height] : 0.0) : 0.0;
	building-fill-opacity: [nuti::use_3d] ? ([render_height] ? @height_opacity : 0.0) : 0.0;
	polygon-opacity: @obstacles_polygon_opacity;
	polygon-fill: rgba(255,255,255,0);
	building-fill: rgba(255,255,255,0);


    [class='baggagecarousel'] {
        polygon-fill: @baggagecarousel_fill;
        building-fill: @baggagecarousel_fill;
        line-color: @baggagecarousel_line;
        line-width: @baggagecarousel_line_width;
    }

    [class='desk'] {
        polygon-fill: @desk_fill;
        building-fill: @desk_fill;
        line-color: @desk_line;
        line-width: @desk_line_width;
    }

    [class='equipment'] {
        polygon-fill: @equipment_fill;
        building-fill: @equipment_fill;
        line-color: @equipment_line;
        line-width: @equipment_line_width;
    }

    [class='furniture'] {
        polygon-fill: @furniture_fill;
        building-fill: @furniture_fill;
        line-color: @furniture_line;
        line-width: @furniture_line_width;
    }

    [class='water'] {
        polygon-fill: @water_fill;
        building-fill: @water_fill;
        line-color: @water_line;
        line-width: @water_line_width;
    }

    [class='obstruction'] {
        polygon-fill: @obstruction_fill;
        building-fill: @obstruction_fill;
        line-color: @obstruction_line;
        line-width: @obstruction_line_width;
    }

    [class='shelving'] {
        polygon-fill: @shelving_fill;
        building-fill: @shelving_fill;
        line-color: @shelving_line;
        line-width: @shelving_line_width;
    }

    [class='stage'] {
        polygon-fill: @stage_fill;
        building-fill: @stage_fill;
        line-color: @stage_line;
        line-width: @stage_line_width;
    }

    [class='vegetation'] {
        polygon-fill: @vegetation_fill;
        building-fill: @vegetation_fill;
        line-color: @vegetation_line;
        line-width: @vegetation_line_width;
    }

    [class='wall'] {
        polygon-fill: @wall_fill;
        building-fill: @wall_fill;
        line-color: @wall_line;
        line-width: @wall_line_width;
    }

    when([ENTITY_ID] =~ [nuti::custom_highlight_entity_id_regex_1]) {
        polygon-fill: [nuti::custom_highlight_color_1];
		building-fill: [nuti::custom_highlight_color_1];
    }
    when([ENTITY_ID] =~ [nuti::custom_highlight_entity_id_regex_2]) {
        polygon-fill: [nuti::custom_highlight_color_2];
		building-fill: [nuti::custom_highlight_color_2];
    }
    when([ENTITY_ID] =~ [nuti::custom_highlight_entity_id_regex_3]) {
        polygon-fill: [nuti::custom_highlight_color_3];
		building-fill: [nuti::custom_highlight_color_3];
    }
    when([ENTITY_ID] =~ [nuti::custom_highlight_entity_id_regex_4]) {
        polygon-fill: [nuti::custom_highlight_color_4];
		building-fill: [nuti::custom_highlight_color_4];
    }
    when([ENTITY_ID] =~ [nuti::custom_highlight_entity_id_regex_5]) {
        polygon-fill: [nuti::custom_highlight_color_5];
		building-fill: [nuti::custom_highlight_color_5];
    }
}

#structures {
	building-height: [nuti::use_3d] ? ([render_height] ? [render_height] : 0.0) : 0.0;
	building-fill-opacity: [nuti::use_3d] ? ([render_height] ? @height_opacity : 0.0) : 0.0;
	polygon-opacity: @structures_polygon_opacity;
	polygon-fill: rgba(255,255,255,0);
	building-fill: rgba(255,255,255,0);


    [class='building'] {
		polygon-fill: ([ENTITY_ID] =~ [nuti::selected_entity_id_regex] ? @building_selected_fill : @building_fill);
        building-fill: ([ENTITY_ID] =~ [nuti::selected_entity_id_regex] ? @building_selected_fill : @building_fill);
        line-color: @building_line;
        line-width: @building_line_width;
        polygon-opacity: [ENTITY_ID] =~ [nuti::hidden_id_regex] ? 0.0 : 1.0;
        line-opacity: [ENTITY_ID] =~ [nuti::hidden_id_regex] ? 0.0 : 1.0;
    }

    [class='flooropening'] {
        polygon-fill: ([ENTITY_ID] =~ [nuti::selected_entity_id_regex] ? @flooropening_selected_fill : @flooropening_fill);
		building-fill: ([ENTITY_ID] =~ [nuti::selected_entity_id_regex] ? @flooropening_selected_fill : @flooropening_fill);
        line-color: @flooropening_line;
        line-width: @flooropening_line_width;
    }

    [class='inaccessible'] {
        polygon-fill: ([ENTITY_ID] =~ [nuti::selected_entity_id_regex] ? @inaccessible_selected_fill : @inaccessible_fill);
		building-fill: ([ENTITY_ID] =~ [nuti::selected_entity_id_regex] ? @inaccessible_selected_fill : @inaccessible_fill);
        line-color: @inaccessible_line;
        line-width: @inaccessible_line_width;
    }

    [class='parking'] {
        polygon-fill: ([name] = "" ? @parking_vacant_fill : ([ENTITY_ID] =~ [nuti::selected_entity_id_regex] ? @parking_selected_fill : @parking_fill));
        building-fill: ([name] = "" ? @parking_vacant_fill : ([ENTITY_ID] =~ [nuti::selected_entity_id_regex] ? @parking_selected_fill : @parking_fill));
        line-color: @parking_line;
        line-width: @parking_line_width;
    }

    [class='room'] {
        polygon-fill: ([name] = "" ? @room_vacant_fill : ([ENTITY_ID] =~ [nuti::selected_entity_id_regex] ? @room_selected_fill : @room_fill));
        building-fill: ([name] = "" ? @room_vacant_fill : ([ENTITY_ID] =~ [nuti::selected_entity_id_regex] ? @room_selected_fill : @room_fill));
        line-color: ([name] = "" ? @room_vacant_line : ([ENTITY_ID] =~ [nuti::selected_entity_id_regex] ? @room_selected_line : @room_line));
        line-width: @room_line_width;
    }

    [class='washroom'] {
        polygon-fill: ([name] = "" ? @washroom_vacant_fill : ([ENTITY_ID] =~ [nuti::selected_entity_id_regex] ? @washroom_selected_fill : @washroom_fill));
        building-fill: ([name] = "" ? @washroom_vacant_fill : ([ENTITY_ID] =~ [nuti::selected_entity_id_regex] ? @washroom_selected_fill : @washroom_fill));
        line-color: @washroom_line;
        line-width: @washroom_line_width;
    }

    [class='kiosk'] {
        polygon-fill: ([name] = "" ? @kiosk_vacant_fill : ([ENTITY_ID] =~ [nuti::selected_entity_id_regex] ? @kiosk_selected_fill : @kiosk_fill));
        building-fill: ([name] = "" ? @kiosk_vacant_fill : ([ENTITY_ID] =~ [nuti::selected_entity_id_regex] ? @kiosk_selected_fill : @kiosk_fill));
        line-color: ([name] = "" ? @kiosk_vacant_line : ([ENTITY_ID] =~ [nuti::selected_entity_id_regex] ? @kiosk_selected_line : @kiosk_line));
        line-width: @kiosk_line_width;
    }

    when([ENTITY_ID] =~ [nuti::custom_highlight_entity_id_regex_1]) {
        polygon-fill: [nuti::custom_highlight_color_1];
		building-fill: [nuti::custom_highlight_color_1];
    }
    when([ENTITY_ID] =~ [nuti::custom_highlight_entity_id_regex_2]) {
        polygon-fill: [nuti::custom_highlight_color_2];
		building-fill: [nuti::custom_highlight_color_2];
    }
    when([ENTITY_ID] =~ [nuti::custom_highlight_entity_id_regex_3]) {
        polygon-fill: [nuti::custom_highlight_color_3];
		building-fill: [nuti::custom_highlight_color_3];
    }
    when([ENTITY_ID] =~ [nuti::custom_highlight_entity_id_regex_4]) {
        polygon-fill: [nuti::custom_highlight_color_4];
		building-fill: [nuti::custom_highlight_color_4];
    }
    when([ENTITY_ID] =~ [nuti::custom_highlight_entity_id_regex_5]) {
        polygon-fill: [nuti::custom_highlight_color_5];
		building-fill: [nuti::custom_highlight_color_5];
    }
}

#pathway {
	polygon-opacity: @pathway_polygon_opacity;
	polygon-fill: rgba(255,255,255,0);
	building-fill: rgba(255,255,255,0);


    [class='pathway'] {
        polygon-fill: @pathway_fill;
        line-color: @pathway_line;
        line-width: @pathway_line_width;
    }

    [class='platform'] {
        polygon-fill: @platform_fill;
        line-color: @platform_line;
        line-width: @platform_line_width;
    }
}

#base {
	polygon-opacity: @base_polygon_opacity;
	polygon-fill: rgba(255,255,255,0);
	building-fill: rgba(255,255,255,0);


    [class='basemap'] {
        polygon-fill: @basemap_fill;
        line-color: @basemap_line;
        line-width: @basemap_line_width;
    }

    [class='floorboundary'] {
        polygon-fill: @floorboundary_fill;
        line-color: @floorboundary_line;
        line-width: @floorboundary_line_width;
    }
}
