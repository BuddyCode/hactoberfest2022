package com.example.csv_reader;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.Table;


@Entity
@Table(name = "csv_data")
public class ModelData {

	  @Column(name = "name")
	  private String name;

	  @Id
	  @Column(name = "email")
	  private String email;

	  @Column(name = "phone_number")
	  private long phoneNumber;

	  public ModelData() {

	  }

	  public ModelData(String name, String  email, long phoneNumber) {
	    this.name = name;
	    this.email = email;
	    this.phoneNumber = phoneNumber;
	  }
	  
	  public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getEmail() {
		return email;
	}

	public void setEmail(String email) {
		this.email = email;
	}

	public long getPhoneNumber() {
		return phoneNumber;
	}

	public void setPhoneNumber(long phoneNumber) {
		this.phoneNumber = phoneNumber;
	}

	@Override
	  public String toString() {
	    return "Tutorial [name=" + name + ", email=" + email + ", phone number=" + phoneNumber + "]";
	  }
	}