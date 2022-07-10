package com.restaurant.pizza.dto;

import java.util.List;

public class PizzaDto {
	private String size;
	private List<FlavorDto> flavor;
	private EdgeDto edge;
	private Float value;

	public String getSize() {
		return size;
	}

	public void setSize(String size) {
		this.size = size;
	}

	public List<FlavorDto> getFlavor() {
		return flavor;
	}

	public void setFlavor(List<FlavorDto> flavor) {
		this.flavor = flavor;
	}

	public EdgeDto getEdge() {
		return edge;
	}

	public void setEdge(EdgeDto edge) {
		this.edge = edge;
	}

	public Float getValue() {
		return value;
	}

	public void setValue(Float value) {
		this.value = value;
	}

}
