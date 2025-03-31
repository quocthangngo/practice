package main

import "fmt"

type User struct {
	ID             int
	Name, Location string
}

func (u *User) Greetings() string {
	return fmt.Sprintf("Hi %s from %s", u.Name, u.Location)
}

func NewUser(ID int, Name, Location string) *User {
	return &User{ID: ID, Name: Name, Location: Location}
}

func main() {
	u := NewUser(42, "Matt", "LA")
	fmt.Println(u.Greetings())
}
