package com.squareup.pollexor;

/**
 * Created by marcussmith on 24/06/15.
 */
public class ThumborTrimPixelColor {
    private final String top_left;
    private final String bottom_right;

    public ThumborTrimPixelColor(String top_left, String bottom_right) {
        this.top_left = top_left;
        this.bottom_right = bottom_right;
    }

    public String getTop_left() {
        return top_left;
    }

    public String getBottom_right() {
        return bottom_right;
    }
}
