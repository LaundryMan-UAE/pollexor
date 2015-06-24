package com.squareup.pollexor;

/**
 * Created by marcussmith on 24/06/15.
 */
public class ThumborVerticalAlign {

    private final String top;
    private final String middle;
    private final String bottom;

    public ThumborVerticalAlign(String top, String middle, String bottom) {
        this.top = top;
        this.middle = middle;
        this.bottom = bottom;
    }

    public String getTop() {
        return top;
    }

    public String getMiddle() {
        return middle;
    }

    public String getBottom() {
        return bottom;
    }
}
